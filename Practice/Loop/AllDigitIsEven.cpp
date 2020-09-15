#include<stdio.h>
/*
*
* Kiem tra so nguyen co dc tao thanh tu cac so chan hay khong?.
* Vd: 22, 468...
*/
int main(){
	int number, digit, flag;
	printf("Nhap so: ");
	scanf("%d", &number);
	
	while(number> 0){
		flag= 1;
		digit= number% 10;
		if(digit % 2 == 1){
			flag= 0;			//chua so le
			break;
		}
		number /= 10;
	}	
	if(flag == 1)
		printf("Duoc tao thanh tu cac so chan");
	else
		printf("Co chua so le");
		
	return 0;
}
		
