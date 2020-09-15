#include<stdio.h>
/*
* 
* In ra chu so dau tien cua so nguyen
* Vd: 1234--> in ra so 1
* 123--> 123/10= 12; 12/10= 1
*/
int main(){
	int number;
	
	printf("Nhap so: ");
	scanf("%d", &number);
	
	do{
		number= number/10;
	}while(number>= 10);		//number< 9 thi dung vong lap (chi con 1 chu so)
	
	printf("So o hang lon nhat la: %d", number);
	return 0;
}
