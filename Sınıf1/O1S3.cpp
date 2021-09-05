#include<stdio.h>

int main(){
	float a,b,c;
	
	printf("ilk sayiyi girin: ");
	scanf("%f",&a);
	
	printf("ikinci sayiyi girin: ");
	scanf("%f",&b);
	
	printf("ucuncu sayiyi girin: ");
	scanf("%f",&c);
	
	printf("uc sayinin ortalamasi: %.3f", (a+b+c)/3 );
	
	return 0;
}
