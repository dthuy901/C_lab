#include<stdio.h>
/*
*
* Tim BCNN cua 2 so: dung cong thuc toan: (a * b) / GCD
* LCM
*
*
*/
int main(){
	int a, b, lcm, gcd;
	printf("Nhap a, b: ");
	scanf("%d %d", &a, &b);
	
	for(int i = 1; i <= a && i <= b; i++){
		if(a % i == 0 && b % i == 0){
			gcd = i;
		}
	}
	lcm = (a * b) / gcd;
	printf("GCD of a, b: %d", lcm);
	return 0;
}
