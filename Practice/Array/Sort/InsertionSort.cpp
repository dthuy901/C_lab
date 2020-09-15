#include<stdio.h>
/*
*
* Ham insertionSort, exportArr
*/
void insertionSort(int arr[], int n);
void exportArr(int arr[], int n);
int main(){
	int arr[] = {9, 0, 5, 2, 6, 7, 7, 1};
	int len;
	len = sizeof(arr)/sizeof(arr[0]);
	insertionSort(arr, len);
	exportArr(arr, len);
	return 0;
}
void insertionSort(int arr[], int n){
	int i, j, key;
	for(i = 1; i < n; i++){
		key = arr[i];
		j = i - 1;
		
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = key;				//index tai vi tri ma key dc sap xep theo dung thu tu sau khi ket thuc vong lap
	}
}
void exportArr(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
