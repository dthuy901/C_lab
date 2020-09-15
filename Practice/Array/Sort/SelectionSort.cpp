#include<stdio.h>
/*
* Selection sort: Tim phan tu co gia tri nho nhat va doi cho phan tu nho nhat do vs phan tu o dau doan
* chua duoc sap xep (khong phai dau mang)
* Mang tang dan: arr[]= 62 24 15 22 1; 		//min arr[4]---> doi voi arr[0] 
* [1] 24 15 22 62;	//min arr[2]---> doi voi arr[1]
* 1 [15] 24 22 62;	//min arr[3]---> doi voi arr[2]
* 1 15 ]22] 24 62;
* 1 15 22 [24] 62;
* Ham swap, selection sort, xuat, main: 4 ham
*/
void swap(int &a, int &b);
void selectionSort(int arr[], int n);
void exportArr(int arr[], int n);
int main(){
	int arr[]= {62, 24, 15, 22, 1};
	int len;
	len= sizeof(arr)/sizeof(arr[0]);
	printf("Mang duoc sap xep theo thu tu tang dan: ");
	selectionSort(arr, len);
	exportArr(arr, len);
	return 0;
}
void swap(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void selectionSort(int arr[], int n){
	int min;
	for(int i = 0; i < n - 1; i++){
		min = i;
		for(int j = i + 1; j < n; j++){
			if(arr[j] < arr[min]){
				swap(arr[j], arr[min]);
			} 
		}	
	}
		
}
void exportArr(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
