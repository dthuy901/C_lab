#include<stdio.h>
/*
* Multiple 2 Matrices: Nhan 2 ma tran: dieu kien: so col cua 1st matrix = so row of 2nd matrix
*
*
*/
void inputArr(int arr[][10], int row, int col);
void exportArr(int arr[][10], int row, int col);
void multiplyMatrices(int a[][10], int row1, int col1, int b[][10], int col2, int result[][10]);
void displayResult(int arr[][10], int row, int col);
int main(){
	int arr1[10][10], arr2[10][10], result[10][10];
	int col1, row1, col2, row2;
	do{
		printf("Nhap col1, row1: ");
		scanf("%d %d", &col1, &row1);
		printf("Nhap col2, row2: ");
		scanf("%d %d", &col2, &row2);
	}while(col1 != row2 || col1 > 10 || col2 > 10);
	
	printf("Nhap ma tran 1: \n");
	inputArr(arr1, row1, col1);
	
	printf("Nhap ma tran 2: \n");
	inputArr(arr2, row2, col2);
	
	printf("Xuat ma tran 1: \n");
	exportArr(arr1, row1, col1);
	
	printf("Xuat ma tran 2: \n");
	exportArr(arr2, row2, col2);
	
	multiplyMatrices(arr1, row1, col1, arr2, col2, result);
	printf("Xuat ma tran ket qua: \n");
	displayResult(result, row1, col2);
	return 0;
}
void inputArr(int arr[][10], int row, int col){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("Nhap arr[%d][%d] = ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
}
void exportArr(int arr[][10], int row, int col){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d\n", arr[i][j]);
		}
	}
}
void multiplyMatrices(int arr1[][10], int row1, int col1, int arr2[][10], int col2, int result[][10]){
	for(int i = 0; i < row1; i++){				//initializing elements matrix becase of += below 
		for(int j = 0; j < col2; j++){
			result[i][j] = 0;
		}
	}
	for(int i = 0; i < row1; i++){
		for(int j = 0; j < col2; j++){
			for(int k = 0; k < col1; k++){
				result[i][j] += arr1[i][k] * arr2[k][j];
			}
		}
	}
}
void displayResult(int arr[][10], int row, int col){
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d ", arr[i][j]);
			if(j == col - 1)
				printf("\n");
		}
	}
}
