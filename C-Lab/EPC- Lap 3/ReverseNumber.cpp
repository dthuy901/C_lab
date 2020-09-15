#include<stdio.h>
/*
* 235
* ReverseNumber: 532
*
* 235 % 10= 5, 235/10= 23,
* 5x10+ 23%10= 50+ 3, 23/10= 2
* 53x10 + 2%10= 530+ 2
*/
int main(){
	int num, reverseNum= 0;
	printf("Nhap so nguyen: ");
	scanf("%d", &num);
	
	do{
		reverseNum= num%10 + reverseNum*10;
		num= num/10;
	}while(num> 0);
	
	printf("So dao nguoc cua so %d la: %d", num, reverseNum);
	return 0;
	
}
