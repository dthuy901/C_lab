#include<stdio.h>
#define MAX (20)
/*
* Them/ xoa phan tu trong mang:
* VD: 1 2 3 4 5
* Nhap so can them: 6. Nhap vi tri muon chen: 1
* -----> 1 6 2 3 4 5
*
* Nhap vi tri muon xoa: 1
* -----> 1 2 3 4 5
* VD: them/xoa phan tu < 0---> gan pos = 0, them phan tu >= len ----> pos = len; xoa phan tu >= len - 1 ----> pos = len -1 
*/
void inputArr(int arr[], int len);
void exportArr(int arr[], int len);
void deleteElementArr(int arr[], int &len, int pos);
void insertElementArr(int arr[], int &len, int pos, int val);
int main(){
	int arr[MAX], position, len, value;								
	do{
		printf("Nhap length: ");
		scanf("%d", &len);
	}while(len < 1 || len > MAX);
	
	printf("====Nhap mang====\n");
	inputArr(arr, len);
	
	printf("\n====Xuat mang====\n");
	exportArr(arr, len);
	
	printf("\n====Them phan tu====\n");
	printf("Nhap vi tri muon them: ");
	scanf("%d", &position);
	printf("Nhap gia tri muon them: ");
	scanf("%d", &value);
	insertElementArr(arr, len, position, value);
	printf("Mang sau khi them: \n");
	exportArr(arr, len);
	
	printf("\n====Xoa phan tu====\n");
	printf("Nhap vi tri muon xoa: ");
	scanf("%d", &position);
	deleteElementArr(arr, len, position);
	printf("Mang sau khi xoa: \n");
	exportArr(arr, len);
	return 0;
	
}
void inputArr(int arr[], int len){
	for(int i = 0; i < len; i++){
		printf("Nhap arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}
void exportArr(int arr[], int len){
	for(int i = 0; i < len; i++){
		printf("%d\n", arr[i]);
	}
}
void deleteElementArr(int arr[], int &len, int pos){
	if(pos < 0){
		pos = 0;
	}else if(pos >= len){
		pos = len - 1;
	}
	for(int i = pos; i < len - 1; i++){
		arr[i] = arr[i + 1];
	}
	len--;
}
void insertElementArr(int arr[], int &len, int pos, int val){
	if(pos < 0){
		pos = 0;
	}else if(pos > len){
		pos = len;
	}
	
	for(int i = len - 1; i > pos; i--){
		arr[i + 1] = arr[i];
	}
	arr[pos] = val;
	len++;
	

}


