#include<stdio.h>

int main(){
	int m=0,j=0,k=0,_a=0;
	// m -> dizideki �ift say�lar�n toplam�n� bulurken dizi i�inde dola�maya yarayan de�i�ken.
	// j -> diziyi k���kten b�y��e s�ralarken dizi i�inde dola�maya yarayan de�i�ken.
	// k -> girdileri sayan de�i�ken.
	// _a -> s�ralama yaparken de�i�imde kullan�lan de�i�ken.
	
	float t=0;
	// t -> dizideki �ift say�lar�n toplam�n� tutan de�i�ken.
	
	int dizi[20];
	
	for(;k<20;k++){
		printf("%d. sayiyi girin: ",k+1);
		scanf("%d",&dizi[k]);	
	}

	for(;m<=19;m++){
		if(dizi[m]%2==0){
			t += dizi[m];
		}
	}
				
	for(;j<=18;j++){
		if (dizi[j+1] < dizi[j]){
			_a = dizi[j];
			dizi[j] = dizi[j+1];
			dizi[j+1] = _a;	
		}	
	}
	
	printf("%.2f",t/dizi[19]);
	
	
	return 0;
}
