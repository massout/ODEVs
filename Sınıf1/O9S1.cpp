//T�rkiye'deki plaka koduna g�re ilk 10 ilin plaka kodlar�n�n ve isimlerinin tutuldu�u dosyay� (sehirler.dat) rasgele eri�imli olarak olu�turunuz.

#include<stdio.h>


char iladi[10][15]= {
						"Adana",
						"Adiyaman",
						"Afyonkarahisar",
						"Agri",
						"Aksaray",
						"Amasya",
						"Ankara",
						"Antalya",
						"Ardahan",
						"Artvin"
					};
	
	
	
int main(){
	
	FILE *fp = fopen("sehirler.dat","w");
		
	fwrite(&iladi,sizeof(iladi[1]),10,fp);
	
	fclose(fp);
	
	return 0;
}
