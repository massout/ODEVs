#include<stdio.h>

int main(){
	
	char klm[100];
	int k=0,i=0;
	
	printf("Metin> ");
	scanf("%[^\n]s",klm);

	
	for(;klm[i] != NULL;i++){
		if(klm[i]>=65 && klm[i]<=90){
			klm[i] = klm[i] + 32; 
		}else if(klm[i]>=97 && klm[i]<=122){
			klm[i] = klm[i] - 32;
		}	
	}
	
	printf("%s",klm);
	
	return 0;
}
