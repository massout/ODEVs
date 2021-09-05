//Kullanýcý tarafýndan girilen bir tam sayý deðerini oluþturduðunuz baðlý listede arayýnýz. Mevcut ise siliniz.

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
	struct Node *bul = NULL;	
	
	int a, b;
	
	while(1){	
		printf("Bir sayi giriniz. Silme islemine gecmek icin sifir girin. > ");
		scanf("%d", &b);
	
		if(!(b)){
			temp = ilk;
			printf("\n\nGirilen sayilar : ");
			while(ptr != NULL){
				printf("%d ",temp->sayi);
				temp = temp->next;
			}
			
			temp = ilk;
			printf("\n\nSilinecek sayiyi girin > ");
			scanf("%d", &a);
			
			while(temp->next->next != NULL){
				if(temp->sayi == a){
					
					bul = temp;
					
					if(bul == ilk){
						
						ilk = ilk->next;
						free(bul);
					}else {
						
						temp = ilk;
						
						while(temp->next != bul){
						temp = temp->next;
						temp->next = temp->next->next;
						free(bul);
						}
					}
				}
			}
			
			printf("\n\nSilme isleminden sonra, girilen sayilar : ");
			temp = ilk;
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
