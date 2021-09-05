//Kendisine parametre olarak gönderilen iki tam sayının OBEB (Ortak Bölenlerin En Büyüğü) ini bulan öz yinelemeli fonksiyonları yazınız.

#include<stdio.h>

int obeb(int x, int y){
	if(y==0){
		return x;
	}else{
		return obeb(y , x%y);
	}
}
	
	
int main(){
	int a,b;
	printf("1. tam sayiyi girin : ");scanf("%d",&a);
	printf("2. tam sayiyi girin : ");scanf("%d",&b);

	
	printf("Girilen sayilarin OBEBi : %d", obeb(a,b));
	
	
	return 0;
}
