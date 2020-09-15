#include<stdio.h>
int main()
{
	int lb, ub; //lb= lower_bound, ub= upper_bound
	int lb1; //lb1= lb+1
	int a, n, i; //a la ket qua phep chia MOD
	int count=0;
	do
	{
		printf("Nhap can duoi: "); 
		scanf("%d", &lb);
		printf("Nhap can tren: ");
		scanf("%d", &ub);
		if (lb>=ub)
		{
		printf("LOI: Can duoi phai nho hon can tren.\n");
		}
	}while(lb>=ub);
	lb1=lb+1;
	if(ub-lb<=1)
		printf("Khong co so nguyen to nao trong khoang (%d, %d)", lb, ub);
	else
	{for(n=lb1; n<ub; n++)
		{for(i=1; i<=n; i++)
			{if(n%i==0)
				count++;
				
			} if (count==2) //code nay chi kiem tra lb1, neu lb1 la nguyen to thi hs ms bao gia tri
					{printf("So nguyen to dau tien trong khoang (%d, %d) la: %d", lb, ub, n);
					}
				else if(count!=2)
				printf("Khong co so nguyen to nao trong khoang (%d, %d)", lb, ub);
				break;
				
				
			
		} 
			
		
	}
			
	
	
	
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
}
