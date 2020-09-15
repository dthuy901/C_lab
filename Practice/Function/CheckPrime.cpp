#include<stdio.h>
#include<math.h>
/*
*
* Ham co tham so, co gia tri tra ve
* Viet ham kiem tra xem 1 so co phai la so nguyen to
*
*/
int checkPrime(int n);				//function prototype
int main(){
	int number, flag;
	
	printf("Nhap so: ");
	scanf("%d", &number);	
	flag= checkPrime(number);
	if(flag== 1)
		printf("%d la so nguyen to", number);
	else
		printf("%d khong phai la so nguyen to", number);
	return 0;

}

int checkPrime(int n){
	int i;
	
	if(n== 0 || n== 1)
		return 0;
		
	for(i= 2; i <= n/2; i++){
		if(n % i == 0){
			return 0;				//0: not prime
		}
	}
	return 1;					//1: prime
}
