#include<stdio.h>

int main(){
	
	char dizi[5][5] = {{42,42,42,42,42},{42,42,42,42,42},{42,42,42,42,42},{42,42,42,42,42},{42,42,42,42,42}};
	

	for(int x=0;x<5;x++){
	
		printf("\n");
		
		for(int y=0;y<5;y++){
		
		if((1<=x && x<=3) && (1<=y && y<=3)){
			dizi[x][y] = 63;
		} 
		if(x==2 && y==2){
			dizi[x][y]=35;	
		}
		
		printf("%c",dizi[x][y]);

			
		}
		
	}
		
			
	
	
	
	
	
	return 0;
}
