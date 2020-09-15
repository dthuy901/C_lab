#include<stdio.h>
int main()
{
	int num, rev=0;
	//int copynum=num;		//SAI: phai khai bao sau khi nhap num
	printf("Nhap num= ");
	scanf("%d", &num);
	int copynum=num;
	rev=0;
	do
	{	rev=rev*10+ num%10;  //1234. loop1: rev=0*10+4, num=123. L2: rev=4*10+3=43, num=12. L3=rev=430+2, num=1. L4=4320+1, num=0
		num=num/10;
	}while(num>0);
	if(copynum==rev)
		printf("Day la so doi xung.");
	else
		printf("Khong phai doi xung.");
	return 0;
	
}
