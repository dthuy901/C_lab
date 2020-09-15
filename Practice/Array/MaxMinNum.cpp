#include<stdio.h>
#define MAX (20)
/*
*
* Tinh tong cac so chan, cac so le trong mang
*/
void inputArr(int arr[], int n);
void exportArr(int arr[], int n);
void maxArr(int arr[], int n);
void minArr(int arr[], int n);

int main(){
	int arr[MAX], num;
	do{
		printf("Nhap n: ");
		scanf("%d", &num);
		if(num <=0 || num >= MAX)
			printf("Xin nhap lai");
	}while(num <=0 || num >= MAX);
	
	printf("\n=======Nhap mang=======\n");
	inputArr(arr, num);
	
	printf("\n=======Xuat mang=======\n");
	exportArr(arr, num);
	
	printf("\n=======Max=======\n");
	maxArr(arr, num);
	
	printf("\n=======Min=======\n");
	minArr(arr, num);
	
	return 0;
}
void inputArr(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("Nhap phan tu thu %d: ", i);
		scanf("%d", &arr[i]);
	}
}
void exportArr(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("Phan tu thu %d: %d\n", i, arr[i]);
	
	}
}
void maxArr(int arr[], int n){
	int max;
	max = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] > max)
			max = arr[i];
	}
	printf("max: %d", max);
	for(int i = 0; i < n; i++){
		if(arr[i] == max)
			printf("Max tai index %d ", i);
	}
}
void minArr(int arr[], int n){
	int min;
	min = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] < min)
			min = arr[i];
	}
	printf("max: %d", min);
	for(int i = 0; i < n; i++){
		if(arr[i] == min)
			printf("Min tai index %d ", i);
	}
}
