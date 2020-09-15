#include<stdio.h>
/*
*
* Swag values
*
*/
int main(){
	int number1, number2, temp;
	printf("Enter number1: ");
	scanf("%d", &number1);
	printf("Enter number2: ");
	scanf("%d", &number2);
	
	temp= number1;
	number1= number2;
	number2= temp;
	
	printf("Number1: %d, Number2: %d", number1, number2);
	return 0;
}
