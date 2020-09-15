#include<stdio.h>
int main(){
	char arr[] = "hello";
	char *const p = arr;
	p[2]++;
	printf("%s", arr);
}
