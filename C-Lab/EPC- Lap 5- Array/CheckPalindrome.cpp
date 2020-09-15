#include<stdio.h>
#include<string.h>
/*
*
* kiem tra xem chuoi co doi xung khong
*
*/
int main(){
	int key, i, j, len, flag;
	char s[20];								
	printf("Nhap xau ki tu: ");
	scanf("%s", s);
	len = strlen(s);
	j = len - 1;
	
	for(i = 0; i < len/2; i++){
		if(s[i] != s[j]){
			printf("Xau khong doi xung");
			return 1;
		}
		j -= 1;
	}
	printf("Xau doi xung");
	return 0;
}
