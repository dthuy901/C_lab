#include<stdio.h>
/*
*
* Ghep chuoi khong dung ham strcat()  chi dung 2 arr goc
*
*
*/
int main(){
	int i, j;
	char s1[20] = "Hello ";
	char s2[] = "Ben.";
	int len; 
	len = 0;
	
	for(int i = 0; s1[i] != '\0'; i++){
		len++;
	}
	for(int j = 0; s2[j] != '\0'; j++){
		s1[len + j] = s2[j];
	}
	s1[len + j] = '\0';
	printf("%s", s1);
	return 0;
}
