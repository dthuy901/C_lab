#include<stdio.h>

int main() {
	int a, b;
	char c;
	scanf("%d %c %d", &a, &c, &b);
	if(c == '+')
		printf("%d + %d = %d", a, b, a + b);
	else if(c == '-')
		printf("%d - %d = %d", a, b, a - b);
	else if(c == '*')
		printf("%d * %d= %d", a, b, a * b);
	else if(c == '/'){
		if(b != 0)	
			printf("%d / %d = %f", a, b, (float)a / b);
		else
			printf("Invalid");
	}else
		printf("Invalid input");
	return 0;
}
