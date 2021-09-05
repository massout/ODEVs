#include<stdio.h>

int main(){
	
	char klm[100];
	int k=0,i=0,j; 
	
	//k -> Boþluk sayýsý	
	//i -> Gezinme deðiþkeni
	
	
	scanf("%[^\n]",klm);
	
	
	//Dizi içindeki boþluklarý sayan döngü.
	for(;klm[i] != NULL;i++){
		if(klm[i] == ' '){
			k++;
		}
		
	}
	
	
	//Dizide yan yana iki boþluk gelirse boþluk sayýsýný bir azaltan döngü.
	for(i=0;klm[i+1] != NULL;i++){
		if((klm[i] == ' ') && (klm[i+1] == ' ')){
				k = k-1;
			}
	}
	
	
	//Boþluk sayýsýnýn bir fazlasý olan kelime sayýsýný veren döngü.
	printf("%d",k+1);
	
	return 0;
}
