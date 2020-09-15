#include<stdio.h>

int main()
{
	int h;
	int m;
	int s;
	//Thong bao cho nguoi dung nhap gio
	printf("Nhap so gio h: ");
	//Nhap gio tu ban phim
	scanf("%d", &h);
	printf("Nhap so phut m: ");
	scanf("%d", &m);
	
	s=h*3600+m*60;
	
	printf("So gio h la %d", h);
	printf("\nSo phut m la %d", m);
	printf("\n\nSo giay la %d", s);
	}
