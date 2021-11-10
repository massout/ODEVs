#include <iostream>
#include <string>

using namespace std;


class Daire {
		float kira_bedeli;
	
	
	public:
		string adres;
		int yas;
		float depozito;
		static int topDdaireSayisi;
		
		Daire(){
			topDdaireSayisi++;
		}
		void zamYap(float);
		void yazdir();
};




void Daire::zamYap(float tufe){
	if(tufe < 0.5){
		this->kira_bedeli *= tufe;
	}else if(0.5 < tufe && tufe < 0.8){
		this->kira_bedeli *= tufe * 0.8;
	}else {
		this->kira_bedeli *= tufe * 0.5;
	}
}


void Daire::yazdir(){
	cout << "Dairenin adresi: " << this->adres << endl;
	cout << "Dairenin yasi: " << this->yas << endl;
	cout << "Dairenin depozitosu: " << this->depozito << endl;
}


class Musteri {
	public:
		string isim;
		int yas;
		Daire *kiralananDaire;
		
		Musteri(string _isim, int _yas):yas(_yas), isim(_isim){}
		void kirala(Daire &);
		void yazdir();
};


void Musteri::kirala(Daire &daire){
	this->kiralananDaire = &daire;
}


void Musteri::yazdir(){
	cout << "Musterinin ismi: " << this->isim << endl;
	cout << "Musterinin yasi: " << this->yas << endl;
	cout << "Kiralanan Daire Bilgileri: " << endl;
	kiralananDaire->yazdir(); 
}

int Daire::topDdaireSayisi = 0;


int main(){
	
	Daire daire;
	float tufe;
	string isim;
	int yas;
	
	cout << "Dairenin adresini girin > "  << endl;
	cin >> daire.adres;
	
	cout << "Dairenin yasini girin > " << endl;
	cin >> daire.yas;
	
	cout << "Depozitoyu girin > " << endl;
	cin >> daire.depozito;
	
	cout << "Tufe oranını girin > " << endl;
	cin >> tufe;
	
	daire.zamYap(tufe);
	
	
	cout << "Musterinin ismini girin > " << endl;
	cin >> isim;
	
	cout << "Musterinin yasini girin > " << endl;
	cin >> yas;
	
	Musteri musteri(isim, yas);
	
	
	
	cout << daire.topDdaireSayisi;
	
	
	return 0;
}
