//0 ile 1000 aras�nda rasgele �retti�iniz 100 adet tam say�y� sayilar.txt dosyas�na yaz�n�z.

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
