#include<stdio.h>
/*
*
* Find ASCII value of a character
*
*/
int main(){
	char c;
	scanf("%c", &c);
	printf("Ma ASCII ung voi %c la: %d\n", c, c);
	printf("%d", sizeof(c));
	return 0;
}
