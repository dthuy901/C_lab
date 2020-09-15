#include<stdio.h>
/*
* 153= 1^3 + 5^3 + 3^3: Armstrong Num: moi chu so luy thua voi chinh so chu so cua no
* 1. Dem chu so: countDigit()
* 2. Tach tung so ra, co so bang so chu so: check()
* 3. so sanh o main de xem phai so Armstrong?
*/
int countDigit(int n);				//1
int check(int n, int pow);			//2
int main(){
	int n, totalDigit, result;
	printf("Nhap so: ");
	scanf("%d", &n);
	
	totalDigit= countDigit(n);
	result= check(n, totalDigit);
	
	if(result == n)
		printf("Armstrong number");
	else
		printf("Not an armstrong number");
	return 0;
}
int countDigit(int n){
	int count;
	count = 0;
	while(n > 0){
		n /= 10;
		count++;
	}
	return count;
}
int check(int n, int pow){
	int sum, digit, temp;
	sum = 0;
	while(n > 0){
		digit = n % 10;			//in ra chu so cuoi
		n /= 10;				//giam di 1 chu so cua so goc
		
		temp= digit;			//gan cho bien tam, vi trong vong for digit *= digit: duplicate gia tri, digit *= temp: temp= const
		for(int i= 1; i < pow; i++){
			digit *= temp;
		}
		sum += digit;
	}
		return sum;
}
		
		
