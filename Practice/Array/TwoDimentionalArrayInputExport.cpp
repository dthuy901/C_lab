#include<stdio.h>
/*
*
* Nhap, xuat mang 2 chieu
*
*
*/
void inputArr(int arr[][20], int m, int n);
void exportArr(int arr[][20], int m, int n);
void minArr(int arr[][20], int m, int n);
void deleteRow(int arr[][20], int &m, int n, int noRow);
void deleteCol(int arr[][20], int m, int &n, int noCol);
void swap2Row(int arr[][20], int m, int n, int row1, int row2);
void swapValue(int &a, int &b);
int main(){
	int arr[20][20];
	int row, col, noRow, noCol; 			//noCol: number of Column
	int row1, row2;							//2 hang muon doi vi tri cho nhau
	printf("Nhap so luong mang: ");
	scanf("%d", &row);
	
	printf("Nhap so len: ");
	scanf("%d", &col);
	
	printf("Nhap mang: \n");
	inputArr(arr, row, col);
	
	printf("\nXuat mang: \n");
	exportArr(arr, row, col);
	minArr(arr, row, col);
	
	printf("\nNhap hang muon xoa: ");
	scanf("%d", &noRow);
	deleteRow(arr, row, col, noRow);
	exportArr(arr, row, col);
	
	printf("\nNhap cot muon xoa: ");
	scanf("%d", &noCol);
	deleteCol(arr, row, col, noCol);
	exportArr(arr, row, col);
	
	printf("\nNhap 2 hang muon doi cho: ");
	scanf("%d %d", &row1, &row2);
	swap2Row(arr, row, col, row1, row2);
	exportArr(arr, row, col);
	return 0;
}
void inputArr(int arr[][20], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("Nhap arr[%d][%d]= ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}
void exportArr(int arr[][20], int m, int n){
	for(int i = 0; i < m; i++){
		for(int j = 0; j < n; j++){
			printf("arr[%d][%d]= %d\n", i, j, arr[i][j]);
		}
	}
}
void minArr(int arr[][20], int m , int n){
	int min, flag;
	flag = 1;					//flag = 0: k co gia tri
    
	for(int i = 0; i < m; i++){				//b.1. tim 1 gia tri chia het cho 3, chi can tim 1, neu k tim ra thi k co gia tri nao tm
		for(int j = 0; j < n; j++){
			if(arr[i][j] % 3 == 0){
				min = arr[i][j];
				flag = 1; 					//flag = 1: mang se co gia tri tm		
			}
		}
	}
	if(flag){
		for(int i = 0; i < m; i++){			//b.2. so sanh lan luot de tim gia tri chia het cho 3 khac va nho hon no
	        for(int j = 0; j < n; j++){
	            if((arr[i][j] % 3 == 0) && (arr[i][j] < min)){
	                min = arr[i][j];
	                flag = 1;
	            }
	        }
    	}
    	printf("\nSo nho nhat trong cac so chia het cho 3 co trong day la %d", min);
		
	}else{
		printf("\nTrong mang vua nhap khong co so chia het cho 3");
	}
        
}
void deleteRow(int arr[][20], int &m, int n, int noRow){
	for(int i = noRow; i < m - 1; i++){
		for(int j = 0; j < n; j++){
			arr[i][j] = arr[i + 1][j];
		}
		
	}
	m--;
}
void deleteCol(int arr[][20], int m, int &n, int noCol){
	for(int i = 0; i < m; i++){
		for(int j = noCol; j < n - 1; j++){
			arr[i][j] = arr[i][j + 1];
		}
		
	}
	n--;
}
void swap2Row(int arr[][20], int m, int n, int row1, int row2){
	if(row1 >= 0 && row1 <= m && row2 >= 0 && row1 <= n){
		for(int j = 0; j < n; j++){
			swapValue(arr[row1][j], arr[row2][j]);
		}
	}
}
void swapValue(int &a, int &b){
	int temp;
	temp = a;
	a = b;
	b = temp;
}
