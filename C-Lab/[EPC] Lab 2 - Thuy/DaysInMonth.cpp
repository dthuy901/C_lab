#include<stdio.h>
int main()
{
	int m;
	//Thong bao va sau do nhap thang tu ban phim
	printf("Nhap thang: ");
	scanf("%d", &m);
	
	if(m==1 || m==3 || m==5 || m==7 || m==8 || m==10 || m==12)
		printf("\nSo ngay trong thang %d: 31 ngay.", m);
	else if(m==4 || m==6 || m==9 || m==11)
		printf("\nSo ngay trong thang %d: 30 ngay.", m);
	else if(m==2)
		printf("\nSo ngay trong thang %d: 28 hoac 29 ngay.", m);
	else
		printf("\nINVALID INPUT: Thang phai thuoc [1, 12].");
}
	
