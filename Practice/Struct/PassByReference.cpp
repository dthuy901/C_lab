#include<stdio.h>
/* 
*	- Pass by reference: 
	For first number,
	Enter real part:  1.1
	Enter imaginary part:  -2.4
	For second number, 
	Enter real part:  3.4
	Enter imaginary part:  -3.2
	
	result.real = 4.5
	result.imag = -5.6 
*/
typedef struct num{
	float real;
	int img;
}complex;
void addNum(complex a, complex b, complex *c);
int main(){
	complex num1, num2, result;
	printf("Enter 1st num: ");
	scanf("%f %d", &num1.real, &num1.img);
	printf("Enter 2nd num: ");
	scanf("%f %d", &num2.real, &num2.img);
	
	addNum(num1, num2, &result);
	printf("result.real = %.1f\n", result.real);
	printf("result.img = %d", result.img);
	return 0;
}
void addNum(complex a, complex b, complex *c){
	c->real = a.real + b.real;
	c->img = a.img + b.img;
}
