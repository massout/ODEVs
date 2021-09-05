#include<stdio.h>

int main(){
	
	int a,b;
	
	printf("ilk sayiyi girin: ");
	scanf("%d",&a);
	printf("ikinci sayiyi girin: ");	
	scanf("%d",&b);
	
	if (a < b)
		printf("buyuk olan sayi: %d",b);
	else if (a > b)
		printf("buyuk olan sayi: %d",a);
	else
		printf("girilen sayilar esit");
		
	
	return 0;
}
