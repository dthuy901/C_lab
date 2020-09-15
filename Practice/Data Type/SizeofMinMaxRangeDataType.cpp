#include<stdio.h>
#include<limits.h>	//int, char macros
#include<float.h>	//float, double macros
int main(){
	char c;
	short s;
	int i;
	unsigned int ui;
	float f;
	double d;
	long long ll;
	
	//sizeof
	printf("Size of char: %d\n", sizeof c);				//1 byte
	printf("Size of short: %d\n", sizeof s);			//2 byte
	printf("Size of int: %d\n", sizeof i);				//4
	printf("Size of unsigned int: %d\n", sizeof ui);	//4
	printf("Size of float: %d\n", sizeof f);			//4
	printf("Size of double: %d\n", sizeof d);			//8
	printf("Size of long long: %d\n", sizeof ll);		//8
	
	//range:
	printf("range of char: %d - %d\n", CHAR_MIN, CHAR_MAX);
	printf("range of short: %d - %d\n", SHRT_MIN, SHRT_MAX);
	printf("range of int: %d - %d\n", INT_MIN, INT_MAX);
	printf("range of unsigned int: 0 - %lli\n", UINT_MAX);
	printf("range of float: %lli - %lii\n", FLT_MIN, FLT_MAX);
	printf("range of double: %lli - %lli\n", DBL_MIN, DBL_MAX);
	printf("range of long long: %lli - %lli\n", LLONG_MIN, LLONG_MAX);
	return 0;
}
