#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c,d,i=0,j=1,k=0,l=0;
	
	//i = tek sayýlarýn toplamý
	//j = çift sayýlarýn çarpýmý
	
	//k = tek sayý adeti 
	//l = çift sayý adeti
	
	printf("1. sayiyi girin: ");
	scanf("%d",&a);
	
	printf("2. sayiyi girin: ");
	scanf("%d",&b);

	printf("3. sayiyi girin: ");
	scanf("%d",&c);
	
	printf("4. sayiyi girin: ");
	scanf("%d",&d);
	
	if(a%2==0){j*=a;l++;}else{i+=a;k++;}
	if(b%2==0){j*=b;l++;}else{i+=b;k++;}
	if(c%2==0){j*=c;l++;}else{i+=c;k++;}
	if(d%2==0){j*=d;l++;}else{i+=d;k++;}

	if(k==0){
		printf("Tek sayi bulunamadi\n");
	}else{
		printf("Tek sayilarin aritmetik ortalamasi: %.2f\n",(float)i/k);
	}
	
	if(l==0){
		printf("Cift sayi bulunamadi");
	}else{
		printf("Cift sayilarin geometrik ortalamasi: %.2f",pow((float)j,1/l));
	}
	
}
