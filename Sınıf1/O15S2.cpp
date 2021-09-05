// 0 ile 100 arası 100 adet rastgele tam sayıdan oluşan dizinin ilk elli elemanını küçükten büyüğe, son elli elemanını büyükten küçüğe quick sort algoritması ile sıralayın.

#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int partition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = (low - 1);
	int temp;
	
	for(int j=low; j<=high-1; j++){
		if(arr[j]<pivot){
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	temp = arr[high];
	arr[high] = arr[i+1];
	arr[i+1] = temp;
	
	return (i+1);
}


void qS(int arr[], int low, int high){
	if(low<high){
		int pi = partition(arr, low, high);
		
		qS(arr, low, pi-1);
		qS(arr, pi+1, high);
	}
	
}


int Rpartition(int arr[], int low, int high){
	int pivot = arr[high];
	int i = (low - 1);
	int temp;
	
	for(int j=low; j<=high-1; j++){
		if(arr[j]>pivot){
			i++;
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
		}
	}
	
	temp = arr[high];
	arr[high] = arr[i+1];
	arr[i+1] = temp;
	
	return (i+1);
}


void RqS(int arr[], int low, int high){
	if(low<high){
		int pi = Rpartition(arr, low, high);
		
		RqS(arr, low, pi-1);
		RqS(arr, pi+1, high);
	}
	
}



int main(){
	
	srand(time(NULL));
	
	int k, arr[100];
	
	for(k=0; k<100; k++){
		arr[k] = rand()%100;
	}
	
	
	
	for(k=0; k<50; k++){
		printf("%d ", arr[k]);
	} printf("\n");
	
	for(k=50; k<100; k++){
		printf("%d ", arr[k]);
	} printf("\n"); printf("\n");
	
	
	
	
	qS(arr, 0, 49);
	
	
	
	
	for(k=0; k<50; k++){
		printf("%d ", arr[k]);
	} printf("\n");
	
	for(k=50; k<100; k++){
		printf("%d ", arr[k]);
	} printf("\n"); printf("\n");
	
	
	
	RqS(arr, 50, 99);
	
	
	
	for(k=0; k<50; k++){
		printf("%d ", arr[k]);
	} printf("\n");
	
	for(k=50; k<100; k++){
		printf("%d ", arr[k]);
	} printf("\n"); printf("\n");
	
	
	
	return 0;
}
