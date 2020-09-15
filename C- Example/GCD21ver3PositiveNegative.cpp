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
	if(a < 0)
		a *= -1;
	if(b < 0)
		b *= -1;
	while(a != b){
		if(a > b)
			a -= b;
		else
			b -= a;
	}
	printf("GCD of a, b: %d", a);
	return 0;
}
