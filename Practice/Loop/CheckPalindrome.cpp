#include<stdio.h>
/*
*	12345---> so k doi xung
*	1221----> so doi xung
*/
int main(){
	int number, reverseNum, copyNumber;
	reverseNum= 0;
	
	printf("Nhap so: ");
	scanf("%d", &number);
	
	copyNumber= number;
	
	do{
		reverseNum= number% 10 + reverseNum* 10;
		number= number/10;
	}while(number> 0);
	
	if(copyNumber== reverseNum)
		printf("Day la so doi xung");
	else
		printf("Day khong phai la so doi xung");
	return 0;
}	
