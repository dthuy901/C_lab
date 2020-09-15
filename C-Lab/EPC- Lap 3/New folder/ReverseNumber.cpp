#include<stdio.h>
int main()
{
	int num, rev=0;
	printf("Nhap num= ");
	scanf("%d", &num);
	rev=0;
	do
	{	rev=rev*10+ num%10;  //1234. loop1: rev=0*10+4, num=123. L2: rev=4*10+3=43, num=12. L3=rev=430+2, num=1. L4=4320+1, num=0
		num=num/10;
	}while(num>0);
	printf("So dao nguoc la: %d", rev);
	return 0;
}
