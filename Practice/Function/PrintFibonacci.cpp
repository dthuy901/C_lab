#include<stdio.h>
/*
* Fibonacci: so sau bang tong 2 so truoc: 1 1 2 3 5 8 13 21...
* In n so Fibonacci: nhap 3 thi in 1 1 2
*/
void printFibonacci(int n);
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printFibonacci(n);
	return 0;
}
void printFibonacci(int n){
	int a1, a2, fibonacci;			//a1: 0, a2: 2nd Fibonacci, i: vi tri, fibonacci: so fibonacci dc in ra 
	a1= 0, a2= 1;
	printf("%d ", a2);				//in so Fibonacci thu 1
	
	for(int i= 2; i <= n; i++){		//in tu so thu 2 cua day Fibonacci
		fibonacci = a1 + a2;
		a1 = a2;					//hoan doi cho lan lap sau, a1 nhay len a2, a2 nhay len so fibonacci vua tim
		a2 = fibonacci;
		printf("%d ", fibonacci);
	}
}
