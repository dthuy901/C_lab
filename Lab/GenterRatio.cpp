#include<stdio.h>
int main()
{
	float b, g;
	float rb, rg;
	//Thong bao nhap so hoc sinh nam
	printf("Nhap so hoc sinh nam: ");
	//Thong bao nhap so nam tu ban phim
	scanf("%f", &b);
	printf("nhap so hoc sinh nu: ");
	scanf("%f", &g);
	
	rb=100*b/(g+b);
	rg=100*g/(g+b);
	printf("\nSo hoc sinh nam la %f", b);
	printf("\nSo hoc sinh nu la %f", g);
	printf("\n\nTy le hoc sinh nam la %f%%",rb);
	printf("\n\nTy le hoc sinh nu la %f%%",rg);
	}
