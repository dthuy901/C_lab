#include<stdio.h>
/*
*
* Fibonacci: so sau bang tong 2 so truoc: 1 1 2 3 5 8 13 21...
* Tim so Fibonacci thu n
*/
int printFibonacci(int n);
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("So Fibonacci thu %d la: %d", n, printFibonacci(n));
	return 0;
}
int printFibonacci(int n){
	int a1, a2, fibonacci;			//a1: 1st of Fibonacci list, a2: 2nd, i: vi tri cua so Fibonacci thu 3: cho vong chay chay tu 3, 
									//fibonacci: so fibonacci vi tri thu n can tim
	a1= 1, a2= 1;
	if(n == 1 || n == 2)
		return 1;
	for(int i= 3; i <= n; i++){
		fibonacci = a1 + a2;
		a1 = a2;					//hoan doi cho lan lap sau, a1 nhay len a2, a2 nhay len so fibonacci vua tim
		a2 = fibonacci;
	}
	return fibonacci;
}
