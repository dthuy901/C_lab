#include<stdio.h>
/*
*
*	Doi he 10 sang 8 Oct: 100 % 8 = 4 (12)
* 						  12 % 8 = 4 (1)
*						  1 % 8 = 1 (0)
*/
int decimalToOct(int n);
int main(){
	int n;
	printf("Nhap so: ");
	scanf("%d", &n);
	
	printf("%d he 10 ung voi %d he 8", n, decimalToOct(n));
	return 0;
}
int decimalToOct(int n){
	int octDigit, octNumber, pow;
	octNumber= 0, pow = 1;
	
	while(n > 0){
		octDigit = n % 8;
		n /= 8;
		
		octNumber += octDigit * pow;
		pow *= 10;
	}
	return octNumber;
}
