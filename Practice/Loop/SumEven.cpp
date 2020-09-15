#include<stdio.h>
/*
* 
* Tinh tong cac so chan trong [a, b]
*
*/
int main(){
	int upperBound, lowerBound, sumEven, i, j;
	sumEven= 0;
	
	do{
		printf("Nhap can duoi: ");
		scanf("%d", &lowerBound);
		printf("Nhap can tren: ");
		scanf("%d", &upperBound);
		if(lowerBound >= upperBound)
			printf("Loi, xin nhap lai.\n");
	}while(lowerBound >= upperBound);
	
	for(i= lowerBound; i <= upperBound; i++){
		if(i % 2== 0){
			sumEven += i;
		}	
	}
	printf("Tong cac so chan trong [%d, %d]: %d", lowerBound, upperBound, sumEven);
	return 0;
}
