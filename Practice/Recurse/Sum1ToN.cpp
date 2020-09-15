#include<stdio.h>
/*
*
* Tinh tong cac so tu 1--> n: khong dung recurse
*
*/
int sum(int number);
int main(){
	int number;
	printf("Nhap so: ");
	scanf("%d", &number);
	printf("Tong tu 1 den %d: %d", number, sum(number));
	return 0;
}
int sum(int number){
	int sum;
	sum= 0;
	for(int i= 1; i<= number; i++){
		sum += i;
	}
	return sum;
}
