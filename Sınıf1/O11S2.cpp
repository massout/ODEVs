//Program içerisinde 0 ile 100 arasýnda rastgele(random) oluþturduðunuz 100 sayýdan 5. bitleri 0 olan sayýlarýn 4. bitini 1 yaparak sayilar0.txt dosyasýna, 5. bitleri 1 olan sayýlarýn 3. bitini 0 yaparak sayilar1.txt dosyasýna yazan program kodunu yazýnýz. Programýn baþýnda 0 ile 100 arasýnda rastgele ürettiðiniz ve iþleme aldýðýnýz 100 sayýyý sayilar.txt dosyasýna yazdýrmayý unutmayýnýz.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	
	unsigned int alfa;
	srand(time(NULL));
	
	FILE *fp0 = fopen("sayilar.txt", "w+");
	FILE *fp1 = fopen("sayilar0.txt", "w+");
	FILE *fp2 = fopen("sayilar1.txt", "w+");
	
	for(int i = 0; i<100; i++){
		
		alfa = rand() % 100;
		
		fprintf(fp0, "%d ", alfa);
		
		
		if(alfa & (1 << 5) == (1 << 5)){
			fprintf(fp1, "%d ", alfa | (1 << 4));
		}
		if (!(alfa & (1 << 5))){
			fprintf(fp2, "%d ", alfa & ~(1 << 3));
		}		
	}
	
	fclose(fp0);
	fclose(fp1);
	fclose(fp2);
	
	return 0;
}
