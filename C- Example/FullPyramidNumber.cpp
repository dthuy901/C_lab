#include<stdio.h>
/*
*			1
*		2	3	2
*	3	4	5	4	3
*
*
*/
int main(){
	int row, temp, digit, flagPosition;
	digit = 0;
	
	printf("Nhap so hang: ");
	scanf("%d", &row);
	for(int i = 0; i < row; i++){
		temp = i;
		flagPosition = i + 1;
		while(row - temp > 1){
			printf("  ");
			temp++;
		}
		for(int j = 1; j <= 2*i + 1; j++){
			if(j <= flagPosition){
				digit++;
				printf("%d ", digit);
			}else{
				digit--;
				printf("%d ", digit);
			}
				
		}
		printf("\n");
	}
	return 0;
}
