#include<stdio.h>
/*
*
* int a, b, c: find max;
*
*/
int main(){
	int a, b, c, max;
	printf("Nhap a: ");
	scanf("%d", &a);
	printf("Nhap b: ");
	scanf("%d", &b);
	printf("Nhap c: ");
	scanf("%d", &c);
	
	max= a;
	if(b>= max && b >= c)
		printf("Max: %d", b);
	else if(c>= max)
		printf("Max: %d", c);
	else
		printf("Max: %d", a);
	return 0;
}
	
	
