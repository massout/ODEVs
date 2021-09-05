// 0 ile 100 arası 100 adet rastgele tam sayıdan oluşan dizinin ilk elli elemanını selection sort algoritması ile büyükten küçüğe, son elli elemanını insertion sort ile küçükten büyüğe sıralayınız.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(){
	
	srand(time(NULL));
	
	int i, j, k, a, temp, arr[100];
	
	for(k=0; k<100; k++){
		arr[k] = rand()%100;
	}
	
	
	
	for(k=0; k<50; k++){
		printf("%d ", arr[k]);
	} printf("\n");
	
	for(k=50; k<100; k++){
		printf("%d ", arr[k]);
	} printf("\n"); printf("\n");
	
	
	
	for(i=0; i<49; i++){
		a = i;
		for(j=i+1; j<50; j++)
			if(arr[j] > arr[a])
				a = j;
		
		temp = arr[i];
		arr[i] = arr[a];
		arr[a] = temp;
	}
	
	
	
	for(k=0; k<50; k++){
		printf("%d ", arr[k]);
	} printf("\n");
	
	for(k=50; k<100; k++){
		printf("%d ", arr[k]);
	} printf("\n"); printf("\n");
	
	
	
	for(i=51; i<100; i++){
		j=i;
		while(j>50 && arr[j-1]>arr[j]){
			temp = arr[j];
			arr[j] = arr[j-1];
			arr[j-1] = temp;
			j--; 
		}
	}
	
	
	
	for(k=0; k<50; k++){
		printf("%d ", arr[k]);
	} printf("\n");
	
	for(k=50; k<100; k++){
		printf("%d ", arr[k]);
	} printf("\n");
	
	return 0;
}
