#include<stdio.h>


int fakto(int a){
	if(a<=1){return 1;}
	else{return a * fakto(a-1);}
		
}

int combi(int a, int b){
	return (fakto(a) / (fakto(b) * fakto(a-b)));
}

int main(){
	int a,b;
	
	printf("Kombinasyon hesaplamasini n sayisinin m'li kombinasyonu seklinde giriniz.\n");

	printf("n sayisini girin: ");scanf("%d",&a);
	
	printf("m sayisini girin: ");scanf("%d",&b);
	
	if (a<b || b<0){printf("HATA");return 0;}
	
	printf("n sayisinin m'li kombinasyonu: %d",combi(a,b));
	
	return 0;
}


