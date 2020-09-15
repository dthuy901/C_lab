#include<stdio.h>
#include<math.h>
/*
*
* Doi tu he 2, 8 sang he 10
* nhap vao 8 thì doi 8 sang 10, 2 thi 2 sang 10
*
*
*/
int main(){
	long long num, copyNum;
	int digit, decNum, base, count;
	decNum = 0;
	count = 0;
	printf("Nhap num: ");
	scanf("%lld", &num);
	copyNum = num;
	printf("%d dang co he: ", num);
	scanf("%d", &base);
	while(num > 0){
		digit = num % 10;
		decNum += digit * pow(base, count); 
		count++;
		num /= 10;
	}
	printf("%lld in %d base = %d in the decimal", copyNum, base, decNum);
	return 0;
}
