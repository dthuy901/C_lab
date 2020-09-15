#include<stdio.h>
int main()
{
	int n, count=0;
	float s[30], total=0; //total kieu float vi diem co dau phay
	printf("Nhap so hoc sinh n: ");
	do{
		scanf("%d", &n);
		if(n<=0)
			printf("Loi: n phai duong. Nhap lai n= ");
	}while(n<=0);
	
	for(int i=0; i<n; i++)
	{
		printf("Diem HS %d: ",i+1);
		scanf("%f", &s[i]); //%f khong phai %s hay %d vi nhap diem vo co 5.5
		total+=s[i];
		count++;
	}
	printf("\nDiem trung binh cua ca lop la: %.2f", total/count);
	float max= s[0];
	float min =s[0];
	for(int i=1; i<n; i++)
	{	if(s[i]>max) //Luu y: so sanh s[i] voi max. s[i] so sanh voi s[0] la sai
			max= s[i];
		if(s[i]<min)
			min=s[i];
	}
	printf("\n\nDiem cao nhat la: %.2f", max);
	printf("\nDiem thap nhat la: %.2f", min);
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	}
