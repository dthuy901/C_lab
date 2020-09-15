#include<stdio.h>
/*
*
* Ham pow dung Recursion
*
*
*/
int recursion(int n, int pow);
int main(){
	int num, pow;
	
	printf("Nhap num: ");
	scanf("%d", &num);
	printf("Nhap pow: ");
	scanf("%d", &pow);
	printf("%d ^ %d = %d", num, pow, recursion(num, pow));
	return 0;
}
int recursion(int n, int pow){
	if(pow == 0){
		return 1;
	}
	return n * recursion(n, pow - 1);
}
