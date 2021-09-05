//Türkiye'deki plaka koduna göre ilk 10 ilin plaka kodlarýnýn ve isimlerinin tutulduðu dosyayý (sehirler.dat) rasgele eriþimli olarak oluþturunuz.

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
