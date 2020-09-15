#include<stdio.h>
/*
*
* Tinh tong n su dung de quy
*
*
*/
int sumOfNum(int n);
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("%d", sumOfNum(n));
	return 0;
}
int sumOfNum(int n){
	if(n == 0)
		return 0;
	return n + sumOfNum(n -1);
}
