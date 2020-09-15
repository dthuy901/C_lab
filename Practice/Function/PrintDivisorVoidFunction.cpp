#include<stdio.h>
/*
*
* In cac uoc cua 1 so nguyen: 6 co cac uoc: -6 -3- 2 -1 1 2 3 6
*
*/
void printDivisor(int number);
int main(){
	int number;
	printf("Nhap so: ");
	scanf("%d", &number);
	
	printDivisor(number);
	return 0;
}
void printDivisor(int number){
	if(number < 0){
		number *= -1;						//chi can tim uoc so duong, roy them -i se ra uoc am
	}
	printf("Uoc cua %d la: \n", number);
	for(int i= 1; i<= number; i++){
		if(number % i == 0){
			printf("%d\t", -i);		//negative divisor
			printf("%d\t", i);		//positive divisor
		}
	}
}
