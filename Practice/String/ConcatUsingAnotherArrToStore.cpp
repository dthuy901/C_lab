#include<stdio.h>
/*
*
* concat 2 chuoi string khong su dung strcat()
*
*/
int main(){
	char a[] = "Hello ";
	char b[] = "Kitty";
	char result[20];
	int i, j;
	for(i = 0; a[i] != '\0'; i++){
		result[i] = a[i];
	}
	for(j = 0; b[j] != '\0'; j++){
		result[i + j] = b[j];
	}
	result[i + j] = '\0';
	printf("%s", result);
	return 0;
}
