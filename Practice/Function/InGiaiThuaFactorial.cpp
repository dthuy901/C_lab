#include<stdio.h>
/*
*
* In giai thua: 5= 5*4*3*2*1;
*
*/
void printFactorial(int n);
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printFactorial(n);
	return 0;
}
void printFactorial(int n){
	int sum;
	sum = 1;
	while(n> 0){
		sum *= n;
		n--;
	}
	printf("Giai thua la: %d", sum);
}
