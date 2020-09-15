#include<stdio.h>
int main()
{
	int lb, ub, lb1; //lb= lower_bound, ub= upper_bound, lb1= lb+1
	int n, i, count=0, dem; 
	
	do
	{
		printf("Nhap can duoi: "); 
		scanf("%d", &lb);
		printf("Nhap can tren: ");
		scanf("%d", &ub);
		if(lb>=ub)
			{
			printf("LOI: Can duoi phai nho hon can tren.\nBan nen nhap lai.\n");
			}
	}while(lb>=ub);
	dem=ub-lb-1; //vd (7,10) thi dem= 2 gom 8 va 9
	lb1=lb+1;
	if(ub-lb<=1)
		printf("Khong co so nguyen to nao trong khoang (%d, %d).", lb, ub);
	else
	{	for(n=lb1; n<ub; n++)
		{
			for(i=2; i<=n/2; i++)
				{if(n%i==0)
					{
					count++;
					break; /* vd (7,10) for 1: n=8, for 2 n%2=0 va i=2 gap break thoat for 2 quay ve for 1 tang n=9 , 9%2!=0 tang i=3 chia het gap break, 
								thoat for 2 ve for 1 tang n len 10(sai) thoat for 1 nhay ve if(count==dem)
							vd (10,12) for 1 n=11, for 2 i=2, n%2!=0 tang i=2 den i=11/2, tang tiep i>11/2 thoat for 2 nhay xuong if (i>n/2)*/
					}
				} 
			if (i> n/2) 
				{
				printf("So nguyen to trong khoang (%d, %d) la: %d", lb, ub, n);
				//break;
				}
		}if(count== dem)
		printf("Khong co so nguyen to nao trong khoang (%d, %d)", lb, ub);
		
	} 
}
			
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
