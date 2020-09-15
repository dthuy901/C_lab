#include<stdio.h>
#define MAX (20)
/*
* Viet cac ham: nhap mang, xuat mang, swap tang, swap giam, ham tang, ham giam: 6 ham
*/
void enterArr(int arr[], int n);
void exportArr(int arr[], int n);
void swapDecreaseArr(int arr[], int n);
void swapIncreaseArr(int arr[], int n);
void decreaseArr(int arr[], int n);
void increaseArr(int arr[], int n);

int main(){
	int arr[MAX], n;			//n: actual size of array
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n <= 0 || n >= MAX);
	
	printf("\n========Nhap mang========\n");
	enterArr(arr, n);
	
	printf("\n========Xuat mang========\n");
	exportArr(arr, n);
	
	printf("\n===Sap xep giam dan===\n");
	decreaseArr(arr, n);
	
	printf("\n===Sap xep tang dan===\n");
	increaseArr(arr, n);
	return 0;
}
void enterArr(int arr[], int n){
	for(int i= 0; i< n; i++){
		printf("Nhap phan tu %d: ", i);
		scanf("%d", &arr[i]);
	}
}
void exportArr(int arr[], int n){
	for(int i= 0; i< n; i++){
		printf("arr[%d] co gia tri: %d\n", i, arr[i]);
	}
}
void swapDecreaseArr(int arr[], int n){
	int temp;
	for(int i= 0; i < n -1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[j] > arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}	
		}
		
	}
}
void swapIncreaseArr(int arr[], int n){
	int temp;
	for(int i= 0; i < n -1; i++){
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[i]){
				temp = arr[i];
				arr[i] = arr[j];
				arr[j] = temp;
			}	
		}
		
	}
}
void decreaseArr(int arr[], int n){
	swapDecreaseArr(arr, n);
	printf("Mang sap xep giam dan: ");
	for(int i = 0; i < n; i++){
		printf("%4d", arr[i]);
	}
}
void increaseArr(int arr[], int n){
	swapIncreaseArr(arr, n);
	printf("Mang sap xep tang dan: ");
	for(int i = 0; i < n; i++){
		printf("%4d", arr[i]);
	}
}

