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
typedef struct complexNum{
	float num;
	float img;
}complex;
complex add(complex a, complex b);
int main(){
	complex a, b, result;
	printf("1st complex num: ");
	scanf("%f %f", &a.num, &a.img);
	printf("2nd complex num: ");
	scanf("%f %f", &b.num, &b.img);
	result = add(a, b);
	printf("Sum = %.1f + %.1f", result.num, result.img);
	return 0;
}
complex add(complex a, complex b){
	complex temp;
	temp.num = a.num + b.num;
	temp.img = a.img + b.img;
	return temp;
}
