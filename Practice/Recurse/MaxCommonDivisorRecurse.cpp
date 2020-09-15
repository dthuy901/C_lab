#include<stdio.h>
/*
*
* Y tuong: Tru 2 so a, b cho nhau cho den khi co 1 so bang 0, return a+ b la ra uoc chung lon nhat
*
*/
int maxCommonDivisor(int a, int b);
int main(){
	int num1, num2;
	printf("Nhap so 1: ");
	scanf("%d", &num1);
	printf("Nhap so 2: ");
	scanf("%d", &num2);
	printf("UCLN: %d", maxCommonDivisor(num1, num2));
	
	return 0;
}
int maxCommonDivisor(int a, int b){
	if(a * b == 0)
		return a + b;
	if(a> b){
		return maxCommonDivisor(a- b, b);
	}else
		return maxCommonDivisor(a, b-a);
}
