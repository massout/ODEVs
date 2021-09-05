#include<stdio.h>


int main(){
	int a,b=0;
	scanf("%d",&a);printf("\n");
	
	for(int i=0;i<10;){
		
		a++;
		
		for(int j=2;j<a;j++){
			if(a%j==0){
				b=1;
				break;
			}
		}
	
		if(b==0){
			printf("%d\n",a);
			i++;
		}
		
		b=0;
	}
	
		
	return 0;
}
