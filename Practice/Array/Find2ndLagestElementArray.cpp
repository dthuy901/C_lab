#include<stdio.h>
#define MAX (100)
/*
* Find the 2nd largest element array: cach 1
* Cach 1: sap xep day so giam dan, phan tu thu 2--> 2nd largest
* Cach 2: tim so 1st largest, 2nd largest
*
*/
void inputArr(int arr[], int len);
void exportArr(int arr[], int len);
void swap(int &a, int &b);
void decreaseSort(int arr[], int len);
int findByLoop(int arr[], int len);
int findBySort(int arr[], int len);
int main(){
	int arr[MAX];
	int len, result;
	do{
		printf("Nhap len: ");
		scanf("%d", &len);
	}while(len > MAX || len <= 1);
	printf("Nhap mang: \n");
	inputArr(arr, len);
	printf("Xuat mang: \n");
	exportArr(arr, len);
	result = findBySort(arr, len);
	printf("\nThe 2nd largest element in array by sort: %d", result);
	printf("\nThe 2nd largest element in array by loop: %d", findByLoop(arr, len));
	return 0;
	
}
void inputArr(int arr[], int len){
	for(int i = 0; i < len; i++){
		printf("Nhap arr[%d]= ", i);
		scanf("%d", &arr[i]);
	}
}
void exportArr(int arr[], int len){
	for(int i = 0; i < len; i++){
		printf("%d\t", arr[i]);
	}
}
void swap(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void decreaseSort(int arr[], int len){
	for(int i = 0; i < len - 1; i++){
		for(int j = i + 1; j < len; j++){
			if(arr[j] > arr[i]){
				swap(arr[j], arr[i]);
			}
		}
	}
}
int findBySort(int arr[], int len){
	decreaseSort(arr, len);
	return arr[1];
}
int findByLoop(int arr[], int len){
	int first, second;
	if(arr[1] > arr[0]){
		first = arr[1];
		second = arr[0];
	}
	else{
		first = arr[0];
		second = arr[1];
	}
	for(int i = 2; i < len; i++){
		if(arr[i] > first){
			second = first;
			first = arr[i];
		}else if(arr[i] > second){
			second = arr[i];
		}	
	}
	return second;
		
}
