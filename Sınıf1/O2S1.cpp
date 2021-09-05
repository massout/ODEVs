#include<stdio.h>

int main(){
	
	float v,f;
	
	printf("Vize notunuzu girin: ");
	scanf("%f",&v);
	
	printf("Final notunuzu girin: ");
	scanf("%f",&f);	
	
	if((0.6)*f+(0.4)*v >= 60){
		printf("Gectiniz!!!");
	}else{
		printf("Butunleme notunuzu girin: ");
		scanf("%f",&f);
		
		if((0.6)*f+(0.4)*v < 60){
			printf("KALDINIZ...");	
		}else{
			printf("Gectiniz!!!");
		}		
	}		
	
	return 0;
}
