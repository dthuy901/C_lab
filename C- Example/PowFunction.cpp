#include<stdio.h>
/*
*
* Ham pow
*
*
*/
int main(){
	int num, pow, result;
	result = 1;
	
	printf("Nhap num: ");
	scanf("%d", &num);
	
	printf("Nhap pow: ");
	scanf("%d", &pow);
	for(int i = 1; i <= pow; i++){
		result *= num;
	}
	printf("%d ^ %d = %d", num, pow, result);
	return 0;
	
}
