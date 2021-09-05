#include<stdio.h>

int main(){
	int m=0,j=0,k=0,_a=0;
	// m -> dizideki çift sayýlarýn toplamýný bulurken dizi içinde dolaþmaya yarayan deðiþken.
	// j -> diziyi küçükten büyüðe sýralarken dizi içinde dolaþmaya yarayan deðiþken.
	// k -> girdileri sayan deðiþken.
	// _a -> sýralama yaparken deðiþimde kullanýlan deðiþken.
	
	float t=0;
	// t -> dizideki çift sayýlarýn toplamýný tutan deðiþken.
	
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
