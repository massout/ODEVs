//Klavyeden kullanýcý istediði sürece(E/H) girilen tam sayýlarý bir çift yönlü baðlý listeye aktarýnýz.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NODE {
	int sayi;
	struct NODE *next;
	struct NODE *prev;
};


int main(){
	char arr[10];
	int b;
	
	struct NODE *ilk=NULL, *ptr=NULL, *temp=NULL;
	
	do{
		printf("\nBir sayi giriniz > "); scanf("%d", &b);
		printf("Devam etmek icin 'EVET', cikmak icin 'HAYIR' giriniz > "); scanf("%s", arr);
		
		if(ilk == NULL){
			ilk = (struct NODE *) malloc(1*sizeof(struct NODE));
			
			ilk->sayi = b;
			ilk->next = NULL;
			ilk->prev = NULL;
			
			ptr = ilk;
		
		}else {
			ptr->next = (struct NODE *) malloc(1*sizeof(struct NODE));
			
			ptr->next->prev = ptr;
			ptr=ptr->next;
			ptr->sayi = b;
			ptr->next = NULL;
		}
		
	} while(strcmp(arr, "EVET") == 0);
	
	printf("\n\nGirilen sayilar : ");
	
	temp = ilk;
	
	while(temp != NULL){
		printf("%d ", temp->sayi);
		
		temp = temp->next;
	}
	
	
	return 0;
}
