#include<stdio.h>
/*
*
* Sap xep day so tang dan: bubble sort
*
*/
int main(){
	int arr[5], temp;
	printf("Nhap 5 so: \n");
	for(int i = 0; i < 5; i++){
		printf("Nhap so %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	for(int i = 0; i < 5 -1; i++){				//bubble sort
		for(int j = 0; j < 5 -1- i; j++){
			if(arr[j] > arr[j + 1]){
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	printf("Day so theo thu tu tang dan: ");
	for(int i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
