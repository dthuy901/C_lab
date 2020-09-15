#include<stdio.h>
/*
* Dung phep nhan
* ngay dau: 2000, ngay sau hon ngay truoc 1000. sau 30 ngay bn tien
* sum= 0 + 2000, tang= 2000 + 1000 (0)
* sum= 2000 + 2000 + 1000, tang= 2000+ 1000+ 1000 (1)
*
*/

int main(){
	int day, sum;
	sum= 0;
	
	for(day= 0; day< 30; day++){
		sum= sum + 2000 + 1000* day;
	}
	printf("So tien sau 1 thang la: %d", sum);
	return 0;
}
 
