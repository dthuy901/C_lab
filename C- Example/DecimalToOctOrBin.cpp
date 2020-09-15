#include<stdio.h>
#include<math.h>
/*
*
* Doi tu he 10, 8 sang he 2
* nhap vao 8 thì doi 10 sang 8, 2 thi 10 sang 2
*
*
*/
int main(){
	int num, base, decimalDigit, decimalNum, count, copyNum;
	decimalNum = 0;
	count = 0;
	
	printf("Nhap so muon chuyen: ");
	scanf("%d", &num);
	copyNum = num;
	
	printf("Nhap he muon chuyen sang: ");
	scanf("%d", &base);
	while(num > 0){
		decimalDigit = num % base;
		num /= base;
		decimalNum += decimalDigit * pow(10, count);
		count++;
		
	}
	printf("So %d he 10 chuyen sang he %d la: %d", copyNum, base, decimalNum);
	return 0;
}
