#include<stdio.h>
/*
*
* Tim uoc chung lon nhat cua 2 so: duong duong, duong am
* GCD
*
*
*/
int main(){
	int a, b, gcd;
	printf("Nhap a, b: ");
	scanf("%d %d", &a, &b);
	while(a * b != 0){
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	printf("GCD of a, b: %d", a + b);
	return 0;
}
