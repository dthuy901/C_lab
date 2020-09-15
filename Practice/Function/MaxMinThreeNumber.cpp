#include<stdio.h>
/*
*
* Tim max, min trong 3 so
* Dung fucntion: y tuong: tao function maxTwoNum---> tim max, roy dung ham do cho 3 so: maxTwoNum(a, maxTwoNum(b, c));
*
*/
int minTwoNum(int a, int b);				//give 2 numbers, find min
int maxTwoNum(int a, int b);
int minThreeNum(int a, int b, int c);		//give 3 numbers, find min
int maxThreeNum(int a, int b, int c);

int main(){
	int number1, number2, number3, min, max;
	
	printf("Nhap so 1: ");
	scanf("%d", &number1);
	printf("Nhap so 2: ");
	scanf("%d", &number2);
	printf("Nhap so 3: ");
	scanf("%d", &number3);
	
	min= minThreeNum(number1, number2, number3);
	max= maxThreeNum(number1, number2, number3);
	
	if(max== min)
		printf("Equal");
	else{
		printf("Max : %d\n", max);
		printf("Min : %d", min);
	}
	return 0;
}

int minTwoNum(int a, int b){
	return (a < b ? a : b);
}

int maxTwoNum(int a, int b){
	return (a > b ? a : b);
}

int minThreeNum(int a, int b, int c){
	return (a< minTwoNum(b, c) ? a : minTwoNum(b, c));
	
}	

int maxThreeNum(int a, int b, int c){
	return (a > maxTwoNum(b, c) ? a : maxTwoNum(b, c));	
}			
