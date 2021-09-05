#include<stdio.h>
#include<math.h>
int arr1[100];

struct Alfa{
	int enbuyuk(int arr[]){
		int t=arr[0];
		for(int i=0;i<101;i++){
			if(t<arr[i]){
				t=arr[i];
			}
		}
		
		return t;
	}
	int enkucuk(int arr[]){
		int t=arr[0];
		for(int i=0;i<101;i++){
			if(t>arr[i]){
				t=arr[i];
			}
		}
		
		return t;
	}
	
	float ortalama(int arr[]){
		float t=0;
		for(int i=0;i<101;i++){
			t += arr[i];
		}
		
		return t/100.0;
	}
	
	float stdsapma(int arr[]){
		float t=0.0,k=0.0;
		for(int i=0;i<101;i++){
			t += arr[i];
		}
		t /= 100.0;
		for(int j=0;j<101;j++){
			k += ((arr[j]-t)*(arr[j]-t));
		}
	
		return k/100.0;
	}
};


int main(){
	
	struct Alfa A;
	
	for(int i=0;i<101;i++){
		scanf("%d",&arr1[i]);
	}
	
	printf("En kucuk Deger: %d\n",A.enkucuk(arr1));
	printf("En buyuk Deger: %d\n",A.enbuyuk(arr1));
	printf("Ortalama Deger: %.2f\n",A.ortalama(arr1));
	printf("Standart Sapma: %.2f\n",A.stdsapma(arr1));
		
	return 0;
}
















