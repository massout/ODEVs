#include<stdio.h>

int main(){
	int a,b=0,c=0,d=0;

	
	printf("Bir sayi giriniz: ");
	scanf("%d",&a);
	
	if(a>2){
		for(;b<a;b=b+2,d++)
			c += b;
			
		//HESAPLAMALARA 0 DAHIL DEGILDIR
		printf("Girilen sayiya kadar olan cift sayilarin toplami: %d\n",c);
		printf("Girilen sayiya kadar olan cift sayilarin ortalamasi: %.2f",(float)c/(d-1));	
	}else{
		printf("Lutfen 2'den buyuk bir sayi girin!");
	}
	
	return 0;
}
