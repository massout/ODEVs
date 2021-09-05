//Kullan�c� taraf�ndan girilen bir tam say� de�erini olu�turdu�unuz �ift y�nl� ba�l� listede aray�n�z. Mevcut ise siliniz. (1. sorudaki kodunuzu �ift Y�nl� Ba�l� Liste olu�turmak i�in kullanarak, kullan�c�n�n girdi�i tam say�y� Arama ve Silme i�lemlerini ekleyiniz. )

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NODE {
	int sayi;
	struct NODE *next;
	struct NODE *prev;
};


int main(){
	char arr[10];
	int b, bulundu, aranan;
	
	struct NODE *ilk=NULL, *ptr=NULL, *temp=NULL, *bul=NULL;
	
	do{
		printf("\nBir sayi giriniz > "); scanf("%d", &b);
		printf("Devam etmek icin 'EVET', cikmak ve silinecek say�y� bulmak icin 'HAYIR' giriniz > "); scanf("%s", arr);
		
		if(ilk == NULL){
			ilk = (struct NODE *) malloc(1*sizeof(struct NODE));
			
			ilk->sayi = b;
			ilk->next = NULL;
			ilk->prev = NULL;
			
			ptr = ilk;
		
		}else {
			ptr->next = (struct NODE *) malloc(1*sizeof(struct NODE));
			
			ptr->next->prev = ptr;
			ptr=ptr->next;
			ptr->sayi = b;
			ptr->next = NULL;
		}
		
	} while(strcmp(arr, "EVET") == 0);
	
	printf("\n\nGirilen sayilar : ");
	
	temp = ilk;
	
	while(temp != NULL){
		printf("%d ", temp->sayi);
		
		temp = temp->next;
	}
	
	temp = ilk;
	
	printf("\n\n\nSilinecek sayiyi girin > "); scanf("%d", &aranan);
	
	while(temp != NULL){
		if(temp->sayi == aranan){
			bulundu = 1;
			bul = temp;
			break;
		}
		temp = temp->next;
	}
	
	if(bulundu){
		if(bul == ilk){
			ilk = ilk->next;
			ilk->prev = NULL;
			free(bul);
		}else {
			temp = ilk;
			
			while(temp != bul)
				temp = temp->next;
				
				if(bul->next != NULL){
					temp->next->next->prev = temp;
					temp->next = temp->next->next;
					
					
				}else {
					temp->prev->next = NULL;
					
				}
				
				free(bul);
			
		}
		
		temp = ilk;
		
		printf("Aranan sayi bulundu ve silindi. Yeni sayilar : ");
		
		while(temp != NULL){
			printf("%d ", temp->sayi);
		
			temp = temp->next;
		}
		
	}else {
		printf("Aranan sayi bulunamadi.");
	}
		
	
	
	return 0;
}
