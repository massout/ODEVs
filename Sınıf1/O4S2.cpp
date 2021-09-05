#include<stdio.h>

int main(){
	
	char klm0[100];
	char klm1[100];
	int k=0,i=0,n=0;
	
	printf("Metin> ");
	gets(klm0);
	
	printf("Kelime> ");
	gets(klm1);
	
	for(;klm0[k] != NULL;k++){
		for(;klm1[i] != NULL;i++){
			if(klm0[k] == klm1[i]){
					printf("%d",i);
			}
					
			}
			break;
			
		}
	
	
	
	return 0;
}

