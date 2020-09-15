#include<stdio.h>
/*
*
* Dao nguoc so, su dung ham: 1234---> 4321
*
*/
int reserveNum(int n);					//fucntion reserve number
int main(){
	int num;
	printf("Nhap so: ");
	scanf("%d", &num);
	
	printf("So dao nguoc cua %d: %d", num, reserveNum(num));
	return 0;
}
int reserveNum(int n){
	int reserve;
	reserve = 0;
	while(n > 0){
		reserve= n % 10 + reserve * 10;
		n /= 10;
	}
	return reserve;
}
