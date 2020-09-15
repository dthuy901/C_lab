#include<stdio.h>
/*
*
* Sap xep day so giam dan: 5 2 1 4 7---> 7 5 4 2 1

*
*/
int main(){
	int arr[20], n, temp; 					//20: max size, n: actual size, temp: biem tam
	printf("Actual size of array: ");
	scanf("%d", &n);
	for(int i= 0; i < n; i++){
		printf("arr[%d] co gia tri: ", i);
		scanf("%d", &arr[i]);
	}
	
	for(int i = 0; i < n - 1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[j] > arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}
		}
	}
	printf("Mang sap xep giam dan: ");
	for(int i = 0; i < n; i++){
		printf("%4d", arr[i]);
	}
	return 0;
	
}
