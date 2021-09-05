#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main(){
	int a=0,b=0;
	int A[10];
	int B[10];
	int C[20];
	srand(time(NULL));
	
	for(int i=0;i<10;i++){
		
		A[i]=rand()%100;
		B[i]=rand()%100;
	}
	
	
	printf("\n");
	printf("A: ");
	for(int i=0;i<10;i++){
		printf("%d ",A[i]);
	}
	
	printf("\n");	
	printf("B: ");	
	for(int i=0;i<10;i++){
		printf("%d ",B[i]);
	}
	
	for(int i=99;0<=i;i--){
		
		for(int j=0;j<10;j++){
			if(A[j] == i){
				C[b]=i;
				b++;
			}
			if(B[j] == i){
				C[b]=i;
				b++;
			}
		}
	}
	
	printf("\n");
	printf("C: ");		
	for(int i=0;i<20;i++){
		printf("%d ",C[i]);
	}
	
	
	
	
		
	return 0;
}
