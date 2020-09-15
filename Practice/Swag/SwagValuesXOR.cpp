#include<stdio.h>
/*
*
* Swag values: using XOR operator
*
*/
int main(){
	int number1, number2, temp;
	printf("Enter number1: ");
	scanf("%d", &number1);
	printf("Enter number2: ");
	scanf("%d", &number2);
	
	temp= number1^ number2;
	number1= temp^ number1;
	number2= temp^ number1;
	
	printf("Number1: %d, Number2: %d", number1, number2);
	return 0;
}
