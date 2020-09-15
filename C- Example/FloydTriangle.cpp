#include<stdio.h>
/*
* 1
* 2 3
* 4 5 6
* 7 8 9 10
*
*
*/
int main(){
	int row, digit;
	digit = 1;
	printf("Input row: ");
	scanf("%d", &row);
	for(int i = 1; i <= row; i++){
		for(int j= 1; j <= i; j++){
			printf("%d ", digit);
			digit++;
		}
		printf("\n");
	}
	return 0;
}
