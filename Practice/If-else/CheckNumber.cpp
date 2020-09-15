#include<stdio.h>
/*
*
* Nhap number nguyen, kiem tra duong chan hay duong le, am chan hay am le?
*
*/
int main(){
	int number;
	printf("Enter number: ");
	scanf("%d", &number);
	
	if(number> 0){
		if(number% 2== 0)
			printf("Duong chan");
		else
			printf("Duong le");
	}else if(number< 0){
		if(number% 2== 0)
			printf("Am chan");
		else
			printf("Am le");
	}else
		printf("So 0");
	return 0;
}
