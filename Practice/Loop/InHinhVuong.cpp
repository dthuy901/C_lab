#include<stdio.h>
/*
*
*	in hinh vuong canh  n
*
*/
int main(){
	int number, i, j;
	
	do{
		printf("Nhap canh hinh vuong: ");
		scanf("%d", &number);
		if(number<= 0 || number >= 10)
			printf("Invalid number. Enter number again\n");	
	}while(number<= 0 || number>= 10);
	
	for(i= 0; i< number; i++){
		printf("\n");
		for(j= 0; j< number; j++){
			printf("*");
		}
	}
	return 0;
}	
