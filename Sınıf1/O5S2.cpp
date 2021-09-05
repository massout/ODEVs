#include<stdio.h>

	int bastop(int a){
		
		int top=0;
		
			for(int i = 10;i<=a;i*=10){
				top += (a%(i*10)-a%i)/i;		
			}
			
		top += a%10;
		
		return top;
		}
	
	int main(){
		
		int a;
		
		printf("basamak degeri hesaplanacak sayi: ");
		scanf("%d",&a);
		
		printf("sayinin basamak degerleri toplami: %d",bastop(a));
		
		return 0;
	}
	
	

