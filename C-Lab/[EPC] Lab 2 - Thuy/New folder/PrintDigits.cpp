#include<stdio.h>
int main(){
	int num;
	int a1, b1, c1;
	printf("Nhap so: ");
	scanf("%d", &num);
	do
	{a1=num/10;
		do
		{b1=a1/10;
		c1=a1%10;
		}while(a1>100);
	
	
	
	}while(a1>10);
	printf("%d\n%d\n%d\n", a1, b1,c1);
	}
	
