#include<stdio.h>
/*
* Tim UCLN cua 2 so nguyen duong
* Y tuong: step 1: tim so min trong 2 so (vd: a> b)
* step 2: tim Uoc cua so b (chay for i tu Uoc lon nhat ve nho nhat), moi lan tim dc uoc thi kiem tra a co chia het cho uoc cua b khong?
* Neu chia het thi do la UCLN
*
*/
int maxCommonDivisor(int a, int b);
int maxCommonDivisor2(int c, int d);
int main(){
	int num1, num2;
	do{
		printf("Nhap so 1: ");
		scanf("%d", &num1);
		printf("Nhap so 2: ");
		scanf("%d", &num2);
	}while(num1 <= 0 || num2 <= 0);
	
	printf("UCLN cua %d, %d: %d", num1, num2, maxCommonDivisor(num1, num2));
	return 0;
}
int maxCommonDivisor(int a, int b){				//tim so lon nhat trong 2 so
	int min;
	if(a < b){
		min= a;
		return maxCommonDivisor2(min, b);
		
	}else{
		min= b;
		return maxCommonDivisor2(min, a);
	}
}

int maxCommonDivisor2(int c, int d){			//Tim Uoc lon nhat cua so nho, kiem tra xem do co phai la uoc cua so con lai khong?
 	for(int i= c; i>= 1; i--){
 		if(c % i == 0 && d % i == 0)
 			return i;
 	}
}

