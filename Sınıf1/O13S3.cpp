/*
Baðlý liste düðüm yapýsýný aþaðýdaki gibi oluþturunuz, kullanýcý istediði sürece öðrencilere ait vize ve final notlarýný giriniz. Tüm liste oluþturulduktan sonra öðrencilerin ortalama notlarýný hesaplayarak ekrana yazdýrýnýz.

struct OGRENCI{

    int id;

    float vize;

    float final;

    float ortalama;

    struct OGRENCI *sonraki
	
	};
*/

#include<stdio.h>
#include<stdlib.h>

struct OGRENCI {
	int id;
	float vize;
	float final;
	float ortalama;
	struct OGRENCI *next;
};

int main(){
	struct OGRENCI *ilk = NULL;
	struct OGRENCI *ptr = NULL;
	struct OGRENCI *temp = NULL;
	
	char a;
	int o1;
	float o2, o3;
	
	while(1){	
		printf("Ogrencinin id\'sini girin > ");
		scanf("%d", &o1);
		
		printf("Ogrencinin vize notunu girin > ");
		scanf("%f", &o2);
		
		printf("Ogrencinin final notunu girin > ");	
		scanf("%f", &o3);
		
		
		if(ilk == NULL){
			ilk = (struct OGRENCI *) malloc(1 * sizeof(struct OGRENCI));
			ilk->id = o1;
			ilk->vize = o2;
			ilk->final = o3;
			ilk->ortalama = 0;
			ilk->next = NULL;
			ptr = ilk;
		}else {
			ptr->next = (struct OGRENCI *) malloc(1 * sizeof(struct OGRENCI));
			ptr = ptr->next;
			ptr->id = o1;
			ptr->vize = o2;
			ptr->final = o3;
			ptr->ortalama = 0;
			ptr->next = NULL;
		}
		
		printf("\nDurmak icin \'x\', devam etmek icin 'x' disinda bir karakter giriniz > ");
		scanf("%s", &a);
		
		if(a == 'x'){
			printf("\n\n\n");
			temp = ilk;
			while(temp != NULL){
				printf("Ogrencinin id: %d @@ ortalamasi: %.2f\n", temp->id, (temp->vize * 40/100)+(temp->final * 60/100));
				temp = temp->next;
			}
			break;
		}
		printf("\n\n");
	}
	
	return 0;
}
