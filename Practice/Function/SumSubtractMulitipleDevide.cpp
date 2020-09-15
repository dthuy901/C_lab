#include<stdio.h>
int add(int a, int b){
	return a + b;
}
float devide(int a, int b){
	if(b == 0){
		printf("Invalid");
	}
	return (float)a/b;
}
int main(){
	int number1, number2;
	number1= 9, number2= 1;
	printf("%d + %d = %d\n", number1, number2, add(number1, number2));
	printf("%d / %d = %.2f", number1, number2, devide(number1, number2));
	return 0;
}
