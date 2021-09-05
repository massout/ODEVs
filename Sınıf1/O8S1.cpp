//0 ile 1000 arasýnda rasgele ürettiðiniz 100 adet tam sayýyý sayilar.txt dosyasýna yazýnýz.

#include<stdio.h>
#include<time.h>
#include<stdlib.h>

int main(){
	srand(time(NULL));
	FILE *fp = fopen("sayilar.txt", "w");
	
	for(int i=0;i<100;i++){
		fprintf(fp,"%d ",rand()%1000);
	}
	
	fclose(fp);
	
	return 0;
}
