#include<stdio.h>
/*
*
* Kiem tra 1 so xem co bao nhieu cap tong 2 so nguyen to khong?
* Vd: Nhap n= 10: 10 = 3 + 7; 10 = 5 + 5
*
*
*/
int checkPrime(int n);
int main(){
	int num, flag = 0;
	printf("Nhap n: ");
	scanf("%d", &num);
	for(int i = 2; i <= num/2; i++){
		if(checkPrime(i) && checkPrime(num - i)){
			printf("%d = %d + %d\n", num, i, num - i);
			flag = 1;
		}
	}
	if(flag == 0)
		printf("Khong co to hop tong so nguyen to");
	return 0;
}
int checkPrime(int n){
	int flag = 1;
	for(int j = 2; j <= n/2; j++){
		if(n %  j == 0){
			flag = 0;
			break;
		}
	}
	return flag;
}
