#include<stdio.h>
#include<string.h>
#include<math.h>
/*
*
* Chuyen kieu int thanh kieu string
* Vd: 12345 ----> '12345'
*
*/
int main(){
	int num= 123456;
	char s[10];
	sprintf(s, "%d", num);
	printf("%s", s);
	return 0;
}
