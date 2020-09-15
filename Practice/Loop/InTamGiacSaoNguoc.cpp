#include<stdio.h>
/*
	- n= 5:
	* * * * *
	* * * *
	* * *
	* *
	*
	
*/
int main(){
	int num;
	printf("Nhap so: ");
	scanf("%d", &num);
	
	for(int i= 1; i <= num; i++){
		for(int j= num; j >= i; j--){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
