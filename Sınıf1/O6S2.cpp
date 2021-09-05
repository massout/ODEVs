#include<stdio.h>
#include<string.h>

struct ders{
	int ders_kod;
	int vize;
	int final;
	double gecme_notu;
};

struct sahis_bilgileri{
	char ad[40];
	char soyad[40];
	int no;
	struct ders dersler[5];
};

double gecme_notu(int vize,int final){
	double a;
	a=(0.6)*final+(0.4)*vize;
	return a;
}

void fonksiyon(struct sahis_bilgileri ){
	int i=0;
	struct sahis_bilgileri shb;
	
	printf("Ad> ");
	gets(shb.ad);
	
	printf("Soyad> ");
	gets(shb.soyad);
	
	printf("No> ");
	scanf("%d",&shb.no);
	
	printf("\n");
	
	do{
		printf("%d. Ders Kodu> ",i+1);
		scanf("%d",&shb.dersler[i].ders_kod);
		
		printf("%d. Ders Vize Notu> ",i+1);
		scanf("%d",&shb.dersler[i].vize);
		
		printf("%d. Ders Final Notu> ",i+1);
		scanf("%d",&shb.dersler[i].final);
		
		printf("%d. Ders Gecme Notu: %lf\n\n",i+1,gecme_notu(shb.dersler[i].vize,shb.dersler[i].final));
		
		i++;
	}while(i<5);
}

int main(){
	sahis_bilgileri shb;
	char komut[10];
	int i=0;
	fonksiyon(shb);
	
	return 0;
}
