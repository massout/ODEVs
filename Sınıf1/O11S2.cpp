//Program i�erisinde 0 ile 100 aras�nda rastgele(random) olu�turdu�unuz 100 say�dan 5. bitleri 0 olan say�lar�n 4. bitini 1 yaparak sayilar0.txt dosyas�na, 5. bitleri 1 olan say�lar�n 3. bitini 0 yaparak sayilar1.txt dosyas�na yazan program kodunu yaz�n�z. Program�n ba��nda 0 ile 100 aras�nda rastgele �retti�iniz ve i�leme ald���n�z 100 say�y� sayilar.txt dosyas�na yazd�rmay� unutmay�n�z.

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
