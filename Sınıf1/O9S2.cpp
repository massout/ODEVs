//Olu�turdu�unuz dosyaya rasgele eri�imli ula��p kullan�c�n�n istedi�i plaka koduna kar��l�k ili ekrana yazd�r�n�z. 

#include<stdio.h>

int main(){
	int a;
	char b[15];
	FILE *fp = fopen("sehirler.dat","r");
	
	printf("Istediginiz ilin plaka kodunu girin > ");scanf("%d",&a);
	
	fseek(fp,15*(a-1),SEEK_SET);
	
	fread(&b,15,1,fp);
	
	printf("%s",b);
	
	fclose(fp);
	
	return 0;
}
