#include<stdio.h>

int main(){
	
	char klm[100];
	int k=0,i=0,j; 
	
	//k -> Bo�luk say�s�	
	//i -> Gezinme de�i�keni
	
	
	scanf("%[^\n]",klm);
	
	
	//Dizi i�indeki bo�luklar� sayan d�ng�.
	for(;klm[i] != NULL;i++){
		if(klm[i] == ' '){
			k++;
		}
		
	}
	
	
	//Dizide yan yana iki bo�luk gelirse bo�luk say�s�n� bir azaltan d�ng�.
	for(i=0;klm[i+1] != NULL;i++){
		if((klm[i] == ' ') && (klm[i+1] == ' ')){
				k = k-1;
			}
	}
	
	
	//Bo�luk say�s�n�n bir fazlas� olan kelime say�s�n� veren d�ng�.
	printf("%d",k+1);
	
	return 0;
}
