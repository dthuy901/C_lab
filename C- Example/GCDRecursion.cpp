#include<stdio.h>
/*
*
* find GCD using recursion
*
*/
int findGCD(int a, int b);
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	printf("GCD of %d, %d: %d", n, m, findGCD(n, m));
	return 0;
}
int findGCD(int a, int b){
	if(a == b)
		return a;
	if(a > b)
		return findGCD(a - b, b);
	else
		return findGCD(a, b - a);
}
