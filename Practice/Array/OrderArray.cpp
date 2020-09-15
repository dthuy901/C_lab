#include<stdio.h>
/*
*
* Sap xep day so tang dan: 5 2 1 4 7---> 1 2 4 5 7

*
*/
int main(){
	int arr[20], n, temp; 					//20: max size, n: actual size, temp: biem tam
	do{
		printf("Actual size of array: ");
		scanf("%d", &n);
		if(n <= 0)
			printf("Nhap lai n.")
	}while(n <= 0);
	
	for(int i= 0; i < n; i++){
		printf("arr[%d] co gia tri: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n - 1; i++){				//i chay den ke cuoi, 
		for(int j = i + 1; j < n; j++){			//j chay den cuoi
			if(arr[j] < arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Mang sap xep tang dan: ");
	for(int i = 0; i < n; i++){
		printf("%4d", arr[i]);
	}
	return 0;
	
}
