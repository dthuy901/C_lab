#include<stdio.h>
/*
*
*	Doi he 8 sang 10 Oct: 144 = 4 * 8^0 + 4 * 8^1 + 4*8^2
* 						  
*						  
*/
int octToDecimal(int n);
int main(){
	int n;
	printf("Nhap so: ");
	scanf("%d", &n);
	
	printf("%d he 8 ung voi %d he 8", n, octToDecimal(n));
	return 0;
}
int octToDecimal(int n){
	int octDigit, decimalNum, pow;
	decimalNum= 0, pow = 1;
	
	while(n > 0){
		octDigit = n % 10;
		n /= 10;
		
		decimalNum += octDigit * pow;
		pow *= 8;
	}
	return decimalNum;
}
