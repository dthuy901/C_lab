#include<stdio.h>
/*
*
* 1 ma tran moi ma hoan doi row va col cua ma tran goc: 
* 2 3 4			--> 2 5
* 5 6 7				3 6
*				    4 7
*/
int main(){
	int arr[10][10], row, col, transpose[10][10];
	do{
		printf("Nhap row, col: ");
		scanf("%d %d", &row, &col);
	}while(col <= 0 || col > 10);
	printf("Nhap ma tran: \n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("Nhap arr[%d][%d]: ", i, j);
			scanf("%d", &arr[i][j]);
		}
	}
	printf("Xuat ma tran: \n");
	for(int i = 0; i < row; i++){
		for(int j = 0; j < col; j++){
			printf("%d ", arr[i][j]);
			if(j == col -1)
				printf("\n");
		}
	}
	for(int i = 0; i < col; i++){
		for(int j = 0; j < row; j++){
			transpose[i][j] = arr[j][i];
		}
	}
	printf("Xuat transpose arr: \n");
	for(int i = 0; i < col; i++){
		for(int j = 0; j < row; j++){
			printf("%d ", transpose[i][j]);
			if(j == row -1)
				printf("\n");
		}
	}
	return 0;
}
