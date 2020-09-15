#include<stdio.h>
int main ()
{
	int t;
	//thong bao va sau do nhap gio hien tai tu ban phim
	printf("Nhap gio hien tai: ");
	scanf("%d", &t);
	if (10<= t && t< 20)
		printf("\nGood day");
	else if(0<= t && t< 10)
		printf("\nGood morning");
	else if(20<=t && t<24)
		printf("\nGood evening");
	else 
		printf("\nINVALID INPUT: Gio phai thuoc [0, 23]");
	
}
