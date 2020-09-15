#include<stdio.h>
/*
* Accept numbers in a two dimenstional array
*
*/
int main(){
	int arr[2][3];
	int row, col;
	for(row= 0; row< 2; row++){
		for(col= 0; col< 3; col++){
			printf("Enter a number at [%d][%d]: ", row, col);
			scanf("%d", &arr[row][col]);
		}
	}
	
	for(row= 0; row< 2; row++){
		for(col= 0; col< 3; col++){
			printf("\nNumber at [%d][%d]: %d", row, col, arr[row][col]);
		}
	}
	return 0;
}
	
