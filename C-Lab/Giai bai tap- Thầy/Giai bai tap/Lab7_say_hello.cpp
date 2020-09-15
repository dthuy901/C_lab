#include<stdio.h>

void say_hello(char name[])
{
	printf("Hello, %s!\n", name);
	return;
}

int main()
{
	say_hello("Minh");
	
	char name[] = "Tan";
	say_hello(name);
}
