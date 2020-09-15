#include<stdio.h>
/*
*
* In tam giac can nguoc
*
*/
int main(){
	int row, temp;
	printf("Nhap row: ");
	scanf("%d", &row);
	for(int i = row - 1; i >= 0; i--){
		temp= i;
		for(int j = 1; j <= 2*i + 1; j++){
			while(row - temp > 1){
				printf(" ");
				temp++;
			}
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
