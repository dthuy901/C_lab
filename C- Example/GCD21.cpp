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
	for(int i = 1; i <= a && i <= b; i++){
		if(a % i == 0 & b % i == 0){
			gcd = i;
		}
	}
	printf("GCD of a, b: %d", gcd);
	return 0;
}
