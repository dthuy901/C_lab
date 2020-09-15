#include<stdio.h>
/*
* Nhap xuat mang, tim kiem 1 so xem thuoc index nao trong mang
*
*/
const int MAX = 20;

void enterArr(int arr[], int n);		//nhap mang: parameter: arr[], n: actual size 
void exportArr(int arr[], int n);		//xuat mang
int findIndex(int arr[], int n, int num);

int main(){
	int arr[MAX], n, num, index;					//MAX: max of size, num: so muon tim
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
		if(n <= 0 || n > MAX)
			printf("Nhap lai size cua mang");	
	}while(n <= 0 || n > MAX);
	
	printf("\n=======Nhap mang=======\n");
	enterArr(arr, n);
	
	printf("\n=======Xuat mang=======\n");
	exportArr(arr, n);
	
	printf("\n=======Tim ki tu=======\n");
	printf("Nhap ki tu muon tim: ");
	scanf("%d", &num);
	index= findIndex(arr, n, num);
//	if(index== -1)
//		printf("Invalid number");
	printf("So %d tai index %d", num, index);
	return 0;
}

void enterArr(int arr[], int n){
	for(int i= 0; i < n; i++){
		printf("Nhap phan tu %d: ", i);
		scanf("%d", &arr[i]);
	}
}	
void exportArr(int arr[], int n){
	for(int i= 0; i < n; i++){
		printf("arr[%d] co gia tri: %d\n", i, arr[i]);
	}
}
int findIndex(int arr[], int n, int num){
	for(int i= 0; i < n; i++){
		if(num== arr[i])
			return i;
		return -1;
	}
}
	
