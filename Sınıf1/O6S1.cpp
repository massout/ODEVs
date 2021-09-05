#include<stdio.h>
#include<string.h>

struct Isci{
	char adi[30];
	char soyadi[30];
	int yasi;
	double aylikUcret;
	
} isc;

void fonksiyon(struct Isci){
	printf("Iscinin Adi> ");
	gets(isc.adi);
	
	printf("Iscinin Soyadi> ");
	gets(isc.soyadi);	 
	
	printf("Iscinin Yasi> ");
	scanf("%d",&isc.yasi);
	
	printf("Iscinin Aylik Maasi> ");
	scanf("%lf",&isc.aylikUcret);
	
}


int main(){
	fonksiyon(isc);	
	
	printf("\n\n");
	
	printf("Iscinin Adi:");
	printf("%s\n",isc.adi);
	
	printf("Iscinin Soyadi:");
	printf("%s\n",isc.soyadi);
	
	printf("Iscinin Yasi:");
	printf("%d\n",isc.yasi);
	
	printf("Iscinin Aylik Maasi:");
	printf("%lf\n",isc.aylikUcret);
	
	return 0;
}
