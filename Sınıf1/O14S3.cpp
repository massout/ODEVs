/*
Çift yönlü baðlý liste düðüm yapýsýný aþaðýdaki gibi oluþturunuz. Kullanýcý istediði sürece(E/H) öðrencilere ait vize ve final notlarýný giriniz. Kullanýcý (H) seçerek veri giriþini tamamlayarak tüm listeyi oluþturduktan sonra öðrencilerin ortalama notlarýný hesaplayarak ekrana yazdýrýnýz. (Vize:%40, Final:%60)

            struct OGRENCI{
                int id;
                float vize;
                float final;
                float ortalama;
                struct OGRENCI *sonraki;
                struct OGRENCI *önceki;
            };
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct OGRENCI{
    int id;
    float vize;
	float final;
	float ortalama;
	struct OGRENCI *next;
	struct OGRENCI *prev;
};


int main(){
	char arr[10];
	int id;
	float vize, final;
	
	struct OGRENCI *ilk=NULL, *ptr=NULL, *temp=NULL;
	
	do{
		printf("\nOgrencinin id sini girin > "); scanf("%d", &id);
		printf("Ogrencinin vize notunu girin > "); scanf("%f", &vize);
		printf("Ogrencinin final notunu girin > "); scanf("%f", &final);
		printf("Devam etmek icin 'EVET', cikmak ve ogrencilerin not ortalamalarýný siralamak icin 'HAYIR' giriniz > "); scanf("%s", arr);
		
		if(ilk == NULL){
			ilk = (struct OGRENCI *) malloc(1*sizeof(struct OGRENCI));
			
			ilk->id = id;
			ilk->vize = vize;
			ilk->final = final;
			ilk->ortalama = final*0.6 + vize*0.4;
			ilk->next = NULL;
			ilk->prev = NULL;
			
			ptr = ilk;
		
		}else {
			ptr->next = (struct OGRENCI *) malloc(1*sizeof(struct OGRENCI));
			
			
			ptr->next->prev = ptr;
			ptr=ptr->next;
			ptr->id = id;
			ptr->vize = vize;
			ptr->final = final;
			ptr->ortalama = final*0.6 + vize*0.4;
			ptr->next = NULL;
		}
	} while(strcmp(arr, "EVET") == 0);
	
	printf("\n\nOgrenciler ve not ortalamalari : ");
	
	temp = ilk;
	
	while(temp != NULL){
		printf("\n");
		printf("%d %.2f", temp->id, temp->ortalama);
		
		temp = temp->next;
	}
	
	return 0;
}
