#include<stdio.h>
/*
*
* 1010 (2)= 0* 10^0 + 1*10^1 + 0*10^2 + 1*10^3
*
*
*/
int binToDecimal(long long bin);
int main(){
	long long bin;
	printf("Nhap bin num: ");
	scanf("%lli", &bin);
	
	printf("%lli he 2 ung voi %d he 10", bin, binToDecimal(bin));
	return 0;
}
int binToDecimal(long long bin){
	int decimalDigit, decimalNum, pow;		//decimalDigit: tung chu so, decimalNum: ket qua can tim
	decimalNum = 0, pow = 1;
	
	while(bin > 0){
		decimalDigit = bin % 10;			//bin % 2 dung vi bin: 1001 % 2 ra 1, nhung voi decimal 1025 % 2 = 1 (k ra chu so cuoi cung)
		decimalNum += decimalDigit * pow;
		
		bin /= 10;
		pow *= 2;
	}
	return decimalNum;
}
