// Veri Yapıları Dersi 1. Ödev
// Ödevin Sorusu PDF Şeklinde Bulunmakta

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;


struct Dugum {
		int derece;
		int katSayi;
		Dugum *sonraki;
};


bool search(Dugum *head, int sayi){
	
	if(head == NULL)
		return false;
		
	if(head->derece == sayi)
		return true;
		
	return search(head->sonraki, sayi);
}


int main(){
	int islem, girilenDerece, girilenKatSayi, sayac=-1;
	float sayiTutucu, degisken;
	Dugum *head=NULL, *ptr=NULL, *temp=NULL, *temp2=NULL;
	
	while (1){
		cout << "1-Ekleme\n2-Silme\n3-Yazdir\n4-Hesapla\n5-Cikis\nYapmak istediginiz islemi secin > ";
		cin >> islem;
		
		cout << endl;
		
		if(islem == 1){
						
			cout << "Dereceyi girin > ";
			cin >> girilenDerece;
					
			cout << "Katsayiyi girin > ";
			cin >> girilenKatSayi;
					
			if (head == NULL){
				head = new Dugum;
						
				head->derece = girilenDerece;
				head->katSayi = girilenKatSayi;
				head->sonraki = NULL;
				
				ptr = head;
				
			}else {
				ptr = head;
				
				if(search(head, girilenDerece)){
					cout << "Cakisma algilandi...\n\n";
					continue;
				}
					
				ptr = head;
				
				if (girilenDerece > head->derece){
					temp = new Dugum;
							
					temp->derece = girilenDerece;
					temp->katSayi = girilenKatSayi;
					temp->sonraki = head;
							
					head = temp;
					temp = NULL;
							
				}else if (girilenDerece < head->derece){
					
					ptr = head;
					
					while (1){
						if(ptr->sonraki == NULL){
							temp = new Dugum;
							
							temp->derece = girilenDerece;
							temp->katSayi = girilenKatSayi;	
							temp->sonraki = NULL;
							
							ptr->sonraki = temp;
							break;							
						}
						
						if (girilenDerece > ptr->sonraki->derece){
							temp = new Dugum;
								
							temp->derece = girilenDerece;
							temp->katSayi = girilenKatSayi;	
														
							temp2 = ptr->sonraki;
							ptr->sonraki = temp;
							temp->sonraki = temp2;
							temp2 = NULL;
							
							break;
						}
						
						ptr = ptr->sonraki;
					}						
				}			
			}	
		
			cout << endl; 
						
		}else if (islem == 2){
			cout << "Silmek istediginiz derece bilgisini girin > ";
			cin >> girilenDerece;
					
			ptr = head;
			
			while (ptr->sonraki != NULL){
						
				if(ptr->derece == girilenDerece && ptr == head){
					head = ptr->sonraki;
					delete ptr;
					ptr = head;
					break;
					
				}else if(ptr->sonraki->derece == girilenDerece){
					temp = ptr->sonraki;
					ptr->sonraki = ptr->sonraki->sonraki;
					delete temp;
					break;
					
				}	
				ptr = ptr->sonraki;
			} 
	
			cout << endl;
			
		}else if (islem == 3){
			ptr = head;
			sayac = 0;
			
			while (ptr != NULL){
				cout << ptr->derece << " " << ptr->katSayi << endl;
				ptr = ptr->sonraki;
				sayac++;
			}
			
			cout << endl;
				
			ptr = head;
					
			while (ptr != NULL){
				if(ptr->derece == 0){
					cout << ptr->katSayi;
				}else if (ptr->derece == 1){
					cout << "X";
				}else {
					cout << ptr->katSayi << "X^" << ptr->derece;
				}
				
				if(sayac > 1){
					cout << "+";					
					sayac--;
				}
				
				ptr = ptr->sonraki;	
			}	
			
			cout << endl << endl;
				
		}else if (islem == 4){
			cout << "Polinomun hesaplanabilmesi icin x bagimsiz degisgenini girin > ";
			cin >> degisken;
			sayiTutucu = 0.0;
			
			ptr = head;
					
			while(ptr->sonraki != NULL){
				sayiTutucu += (pow(degisken, ptr->derece) * ptr->katSayi);		
				ptr = ptr->sonraki;
			}
			
			cout << "Sonuc = " << sayiTutucu << endl;
			
		}else if(islem == 5){
			ofstream File("BagliListe.txt");
			
			ptr = head;
			
			while (ptr != NULL){
				File << ptr->katSayi << " " << ptr->derece << endl;
				ptr = ptr->sonraki;
			}
			
			File.close();
			
			cout << "Cikis yapiliyor..." << endl;
			break;
			
		}else {
			cout << "Hatali islem numarasi..." << endl;
			continue;
			
		}				
	}
		
	
	return 0;
}
