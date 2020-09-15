#include<stdio.h>
#define MAX (20)
/*
*
* Tinh tong cac so chan, cac so le trong mang
*/
void inputArr(int arr[], int n);
void exportArr(int arr[], int n);
void sumEven(int arr[], int n);
void sumOdd(int arr[], int n);

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
	
	printf("\n=======Chan=======\n");
	sumEven(arr, num);
	
	printf("\n=======Le=======\n");
	sumOdd(arr, num);
	
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
void sumEven(int arr[], int n){
	int sum;
	sum = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 == 0){
			sum += arr[i];
		}
	}
	printf("Tong cac so chan la: %d\n", sum);
}
void sumOdd(int arr[], int n){
	int sum;
	sum = 0;
	for(int i = 0; i < n; i++){
		if(arr[i] % 2 == 1){
			sum += arr[i];
		}
	}
	printf("Tong cac so le la: %d", sum);
}
