#include<stdio.h>
#define ORGINAL (2000)
#define INCREASE (1000)
/*
* Chi dung phep cong
* ngay dau: 2000, ngay sau hon ngay truoc 1000. sau 30 ngay bn tien
* sum= 0 + 2000, tang= 2000 + 1000 (0)
* sum= 2000 + 2000 + 1000, tang= 2000+ 1000+ 1000 (1)
*
*/

int main(){
	int increaseByDay, day, sum;
	increaseByDay= ORGINAL;
	sum= 0;
	
	for(day= 0; day< 30; day++){
		sum= sum + increaseByDay;
		increaseByDay= increaseByDay + 1000;
	}
	printf("So tien sau 1 thang la: %d", sum);
	return 0;
}
 
