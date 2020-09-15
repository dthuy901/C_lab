#include<stdio.h>
/*
*			*
*		*	*	*
*	*	*	*	*	*
*
*
*/
int main(){
	int row, temp;
	printf("Nhap so hang: ");
	scanf("%d", &row);
	for(int i = 0; i < row; i++){
		temp = i;
		while(row - temp > 1){
			printf(" ");
			temp++;
		}
		for(int j = 1; j <= 2 * i + 1; j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
