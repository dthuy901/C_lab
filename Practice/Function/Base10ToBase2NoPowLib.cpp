#include<stdio.h>
#include<math.h>
/*
*
* Doi so base-10 sang base-2: 10 (10)= 1010 (2), khong dung ham pow de tinh so mu
*
*/
long long decimalToBin(int n);
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	printf("%d he 10 ung voi %lli he 2", n, decimalToBin(n));
	return 0;
}
long long decimalToBin(int n){
	int count, decimalDigit;				//count: so mu cua 10, decimalNum: ket qua phep chia cho 10 (int)
	long long binaryNum;				//binaryNum: ket qua he 2
	
	binaryNum = 0;
	count = 1;
	
	while(n > 0){		//n=0: dung---> dieu kien chay cua while: n > 0
		decimalDigit = n % 2;
		n /= 2;
		
		binaryNum += decimalDigit* count;
		count *= 10;
	}
	return binaryNum;
}
