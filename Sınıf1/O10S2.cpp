//Girilen say�ya kadar olan pozitif tamsay�lar�n toplam�n� bulan �z yinelemeli fonksiyonu yaz�n�z. 

#include<stdio.h>

int toplayici(int a){
	
	if(a==0){
		return a;
	}else{
		return a + toplayici(a-1);
	}
}

int main() {
	int alfa;
	printf("Bir sayi girin : ");scanf("%d", &alfa);
	
	printf("Girilen sayiya kadar olan tam sayilarin toplami : %d", toplayici(alfa));
	
	
	return 0;
}
