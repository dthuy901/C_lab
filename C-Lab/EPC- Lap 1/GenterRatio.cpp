#include<stdio.h>
int main()
{
	int boy, girl;
	float rb, rg;
	//Thong bao nhap so hoc sinh nam
	printf("Nhap so hoc sinh nam: ");
	//Thong bao nhap so nam tu ban phim
	scanf("%d", &boy);
	printf("nhap so hoc sinh nu: ");
	scanf("%d", &girl);
	
	rb= (float)boy/(girl+boy);		
	rg= (float)girl/(girl+boy);
	
	printf("\nSo hoc sinh nam la %d", boy);
	printf("\nSo hoc sinh nu la %d", girl);
	
	printf("\n\nTy le hoc sinh nam la %.2f%%", rb*100);
	printf("\n\nTy le hoc sinh nu la %.2f%%", rg*100);
	
	return 0;
}
