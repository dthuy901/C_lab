#include<stdio.h>
/*
*
* Tinh tong cac so tu 1--> n: dung recurse
*
*/
int sum(int number);
int main(){
	int number, result;
	printf("Nhap so: ");
	scanf("%d", &number);
	result= sum(number);
	printf("Tong tu 1 den %d: %d", number, result);
	return 0;
}
int sum(int number){
	if(number == 0){					//khi number giam  ==0 thi stop
		return 0;
	}	
	return number + sum(number - 1);
}
