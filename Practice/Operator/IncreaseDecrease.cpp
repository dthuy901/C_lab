#include<stdio.h>
int main(){
	int a, b;
	a= 5, b= 10;
	printf("a++: %d\n", a++);	//5
	printf("++a: %d\n", ++a);	//7
	
	printf("b--: %d\n", b--);	//10
	printf("--b: %d\n", --b);		//8
	
	printf("a== b is: %d", a== b);
	return 0;
}
