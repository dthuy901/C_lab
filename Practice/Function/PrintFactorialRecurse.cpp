#include<stdio.h>
/*
*
* In giai thua: 5= 5*4*3*2*1;
*
*/
int printFactorial(int n);
int main(){
	int n, factorialNum;
	printf("Nhap n: ");
	scanf("%d", &n);
	factorialNum= printFactorial(n);
	printf("%d", factorialNum);
	return 0;
}
int printFactorial(int n){
	if(n == 0)
		return 1;
	return n * printFactorial(n -1);
}
