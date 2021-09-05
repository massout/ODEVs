#include<stdio.h>


int main(){
	int a=0;
	char alfa[100];
	
	scanf("%[^\n]s",&alfa);
	
	for(int j=97;j<123;j++){
		for(int i=0;i<100;i++){
			if(alfa[i] == j){
				a++;
			}
		}
		
		if(a>0){
			printf("\n%c : %d",j,a);
		}
		a=0;
	}
	

			
	
		
	return 0;
}
