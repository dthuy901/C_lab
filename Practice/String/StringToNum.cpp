#include<stdio.h>
#include<string.h>
#include<math.h>
/*
*
* Chuyen kieu string thanh kieu int
* Vd: '12345' ----> 12345
*
*/
int main(){
	char s[]= "123456";
	int len;
	int sum = 0;
	len = strlen(s);
	for(int i = len - 1; i >= 0; i--){
		sum += (int)(s[i] - '0') * pow(10, len - i - 1);
	}
	printf("%d", sum);
	return 0;
}
