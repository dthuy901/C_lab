#include<stdio.h>
/*
*
* dem so luong chu so cua so n> 0: dung recurse
*
*/
int countDigit(int number);

int main(){
	int number;
	do{
		printf("Nhap so: ");
		scanf("%d", &number);
		if(number <= 0)
			printf("Loi. Xin nhap lai.");
	}while(number <= 0);
	
	printf("So luong chu so cua so %d: %d", number, countDigit(number));
	return 0;
}

int countDigit(int number){						//1234: 1 + countDigit(123)
	if(number == 0)								//123: 1 + 1 + countDigit(12)
		return 0;								//12: 1 + 1 + 1 + countDigit(1)
	return 1 + countDigit(number/10);			//1: 1 + 1 + 1 + 1 + 0	
		
}
