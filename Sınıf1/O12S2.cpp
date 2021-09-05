//Kullanýcý tarafýndan negatif tam sayý girilene kadar tam sayý girmesini isteyiniz. Girilen sayýlardan 3’e ve 5’e tam bölünenleri dinamik olarak oluþturacaðýnýz bir diziye pointer aritmetiði kullanarak yazýnýz.

#include<stdio.h>
#include<stdlib.h>

int main(){
	int a ,b=0;
	int *ptr = (int *) calloc(1, sizeof(int));
	
	while(1){
		printf("Bir sayi girin > ");
		scanf("%d", &a);
		if(a<0) break;
		
		if(a%3==0 && a%5==0){
			ptr[b] = a;	
			b++;
			realloc(ptr, sizeof(int) * (b+1));
			printf("%d ", ptr[b]);	
		}	
	}
		
	return 0;
}
