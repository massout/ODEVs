#include<stdio.h>

int main(){
	
	float a,b;
	
	printf("ilk sayiyi girin: ");
	scanf("%f",&a);
	printf("ikinci sayiyi girin: ");
	scanf("%f",&b);
	
	if(b == 0){
		printf("ikinci sayi sifir olamaz!!!");
		return 0;
	}else{
		printf("a+b = %.f\n",a+b);
		printf("a-b = %.f\n",a-b);
		printf("a/b = %.2f\n",a/b);
		printf("a*b = %.f",a*b);
		return 0;
	}
	
}
