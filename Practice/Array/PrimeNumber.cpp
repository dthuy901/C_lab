#include<stdio.h>
#include<math.h>
#define MAX (20)
/*
* Ham nhap, xuat mang: 2
* Ham kiem tra so nguyen to: 1
* ham dem so nguyen to: 1: can goi ham kiem tra so nguyen to.
* Ham in ket qua: 1
* ---> 5 ham
*/
void enterArr(int arr[], int n);
void exportArr(int arr[], int n);
bool checkPrime(int n);
int countPrime(int arr[], int n);
void printPrime(int arr[], int n);

int main(){
	int arr[MAX], n, count;			//n: actual size of array
	do{
		printf("Nhap n: ");
		scanf("%d", &n);
	}while(n <= 0 || n >= MAX);
	
	printf("\n========Nhap mang========\n");
	enterArr(arr, n);
	
	printf("\n========Xuat mang========\n");
	exportArr(arr, n);
	
	printf("\n========Dem so nguyen to=======\n");
	count= countPrime(arr, n);
	printf("So luong so nguyen to la: %d", count);
	
	printf("\n========In so nguyen to=======\n");
	if(count)
		printPrime(arr, n);
	else
		printf("Khong co so nguyen to nao");
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
bool checkPrime(int n){
	if(n < 2)
		return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return true;
}
int countPrime(int arr[], int n){
	int count;
	count = 0;
	for(int i = 0; i < n; i++){
		if(checkPrime(arr[i])){
			count++;
		}		
	}
	return count;
}
void printPrime(int arr[], int n){
	for(int i = 0; i < n; i++){
		if(checkPrime(arr[i]))
			printf("%d\t", arr[i]);
	}
}
