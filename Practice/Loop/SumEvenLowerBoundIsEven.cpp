#include<stdio.h>
/*
* 
* Tinh tong cac so chan trong [a, b]: kiem tra lowerBound phai la so chan hay khong, vong for + 2 de chi cong cac so chan
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
	
	
	if(lowerBound % 2 != 0){
		lowerBound+= 1;
	}
	for(i= lowerBound; i <= upperBound; i+= 2){
		sumEven += i;
			
	}
	printf("Tong cac so chan trong [%d, %d]: %d", lowerBound, upperBound, sumEven);
	return 0;
}
