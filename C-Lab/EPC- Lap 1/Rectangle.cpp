#include<stdio.h>

int main()
{
	float a;
	float b;
	float p;
	float s;
	//Thong bao cho nguoi dung nhap a
	printf("Nhap chieu dai a: ");
	//Nhap a tu ban phim
	scanf("%f", &a);
	printf("Nhap chieu rong b: ");
	scanf("%f", &b);
	
	p=(a+b)*2;
	s=a*b;
	
	printf("Gia tri cua chieu dai a la %f", a);
	printf("\nGia tri cua chieu rong b la %f", b);
	printf("\n\nChu vi hinh chu nhat la %f", p);
	printf("\nDien tich hinh chu nhat la %f", s);
	
	
	 
}
