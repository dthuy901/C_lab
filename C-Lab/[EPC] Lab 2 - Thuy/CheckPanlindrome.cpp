#include<stdio.h>
/*
* 
* Panlindrome: 1221---> dao nguoc lai: 1221
*
*/
int main(){
	int num, panlindromeNum= 0;
	int duplicateNum;
	printf("Nhap so nguyen: ");
	scanf("%d", &num);
	
	duplicateNum= num;
	do{
		panlindromeNum= num%10 + panlindromeNum*10;
		num= num/10;
	}while(num> 0);
	
	if(duplicateNum== panlindromeNum)
		printf("Day la so doi xung");
	else
		printf("Day khong phai la so doi xung");
	return 0;
	
}
