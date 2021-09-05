//Klavyeden kullanýcý istediði sürece girilen tam sayýlarý bir baðlý listeye aktarýnýz.

#include<stdio.h>
#include<stdlib.h>

struct Node {
	int sayi;
	struct Node *next;
};

int main(){
	struct Node *ilk = NULL;
	struct Node *ptr = NULL;
	struct Node *temp = NULL;
	
	int b;
	
	while(1){
		printf("Bir sayi giriniz. Donguyu kirmak icin sifir girin. > ");
		scanf("%d", &b);
				
		if(!(b)){
			temp = ilk;
			printf("\n\nGirilen sayilar : ");
			
			while(ptr != NULL){
				printf("%d ",temp->sayi);
				temp = temp->next;
			}
			break;
		}
		

			
		if(ilk == NULL){
			ilk = (struct Node *) malloc(1 * sizeof(struct Node));
			ilk->sayi = b;
			ilk->next = NULL;
			ptr = ilk;
		}else {
			ptr->next = (struct Node *) malloc(1 * sizeof(struct Node));
			ptr = ptr->next;
			ptr->sayi = b;
			ptr->next = NULL;
		}
	}
	
	return 0;
}
