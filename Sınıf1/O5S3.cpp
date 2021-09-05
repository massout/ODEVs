#include<stdio.h>

	int isasal(int a){
		
		int m=0;
		
		for(int i=2;i<a;i++){
			if(a%i==0){m++;}
		}
		
		if(m==0){
			return 1;
		}else{
			return 0;
		}	
		
	}
	
	int main(){
		
		int a;
		
		printf("Asalligi sorgulanacak sayi: ");
		scanf("%d",&a);
		
		if(isasal(a)==1){
			printf("Girilen sayi asal.");
		}else{
			printf("Girilen sayi asal degil.");
		}
		
		
		return 0;
	}
	
	

