//Kendisine parametre olarak gelen tamsay�y� bitsel operat�rler kullanarak yine kendisine parametre olarak gelen say� kadar left rotated shift yapan fonksiyon kodunu yaz�n�z. Yaz�lan fonksiyonu program i�erisinde kullan�n�z.

#include<stdio.h>

int lshifter(unsigned int a, unsigned int b){
	return (a << b);
}


int main() {
	unsigned int alfa, beta;
	
	printf("Sola Shiftlenecek sayi > ");
	scanf("%d", &alfa);
	
	printf("Sola Shiftlenme sayisi > ");
	scanf("%d", &beta);
	
	printf("\n");
	
	printf("Ondalik = %d \nOn Altilik = 0x%x", lshifter(alfa,beta), lshifter(alfa,beta));
	
	return 0;
}
