//0 ile 100 arasında rasgele değerlerden oluşturacağınız 100 adet tam sayısı sayi.txt dosyasına kaydediniz. sayi.txt dosyasındaki tamsayılardan 5. biti 0 olanları oluşturacağınız dinamik bir dizi içerisine pointer işlemeleri kullanarak aktarınız.

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(NULL));
	int a, b=0;
	int *ptr = (int *) calloc(1, sizeof(int));

	
	FILE *fp1 = fopen("sayi.txt", "w");	

	for (int i=0;i<100;i++){
		fprintf(fp1, "%d ", rand()%100);
	}
	
	fclose(fp1);
	
	
	FILE *fp2 = fopen("sayi.txt", "r");
	
	for (int j=0;j<100;j++){
		fscanf(fp2, "%d", &a);

					
		if((a & 1<<4) == 0){
			ptr[b] = a;
			b++;			
			realloc(ptr, sizeof(int) * (b+1));
		}
	}
	
	fclose(fp2);	


	
	return 0;
}
