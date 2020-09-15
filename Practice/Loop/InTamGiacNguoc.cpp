#include<stdio.h>
/*
* 1 2 3 4 5
* 1 2 3 4
* 1 2 3
* 1 2 
* 1 
*/
int main(){
	int num;
	printf("Nhap so: ");
	scanf("%d", &num);
	
	for(int i= 1; i <= num; i++){
		for(int j= num; j >= i; j--){
			printf("%d ", j);
		}
		printf("\n");
	}
	return 0;
}
