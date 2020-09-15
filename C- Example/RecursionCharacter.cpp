#include<stdio.h>
/*
*
* Convert chuoi su dung recursion: abcd ---> dcba
*
*/
void recursion(void);
int main(){
	printf("Nhap chuoi: ");
	recursion();
	return 0;
}
void recursion(void){
	char c;
	scanf("%c", &c);
	if(c != '\n'){
		recursion();
		printf("%c", c);
	}
}
