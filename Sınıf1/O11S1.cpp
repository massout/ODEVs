//Kendisine parametre olarak gelen tamsayýyý bitsel operatörler kullanarak yine kendisine parametre olarak gelen sayý kadar left rotated shift yapan fonksiyon kodunu yazýnýz. Yazýlan fonksiyonu program içerisinde kullanýnýz.

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
