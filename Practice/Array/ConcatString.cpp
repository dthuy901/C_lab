#include<stdio.h>
/*
*
* Ghep chuoi khong dung ham strcat() dung 1 arr khac de chua
*
*
*/
int main(){
	int i, j;
	char s1[] = "Hello ";
	char s2[] = "Ben.";
	char result[20];
	for(i = 0; s1[i] != '\0'; i++){
		result[i] = s1[i];
	}
	for(j = 0; s2[j] != '\0'; j++){
		result[j] = s2[j];
	}
	result[i + j] = '\0';
	printf("%s", result);
	return 0;
}
