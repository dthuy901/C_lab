#include<stdio.h>

int main()

{
	int i, j, lower_bound, upper_bound, status;
	printf("Nhap can duoi: ");
	scanf("%d", &lower_bound);
	
	printf("Nhap can tren: ");
	scanf("%d", &upper_bound);
	
	if(lower_bound >= 0 && upper_bound >= 0)
	{	
		if(lower_bound < upper_bound)
		{
			if(lower_bound < 2 && upper_bound > 2)
				printf("So nguyen to dau tien trong khoang (%d,%d) la: 2", lower_bound, upper_bound);
			
			else if(lower_bound >= 2)
				{
					for (i = lower_bound+1; i < upper_bound; i++) 
					{ 
			        	status = 1; 
			  
			        	for (j = 2; j <= i / 2; j++)
						{ 
			            	if (i % j == 0) 
							{ 
			                	status = 0; 
			                	break; 
				        	}	 
						}
			        // status = 1 means i is prime 
			        // status = 0 means i is not prime 
			        
			        	if (status == 1) 
			        	{
							printf("So nguyen to dau tien trong khoang (%d,%d) la: ",lower_bound,upper_bound);	
							printf("%d",i);
							break;
	    				}
						else
						{
							printf("Khong co so nguyen to nao trong khoang (%d,%d)",lower_bound,upper_bound);
							break;	
						}
					}
				}
			else
				printf("Khong co so nguyen to nao trong khoang (%d,%d)",lower_bound,upper_bound);
		
		}
		else
			printf("LOI: Can duoi phai nho hon can tren.");
	}
	else
		printf("LOI: can duoi va can tren phai la so duong hoac bang 0");
	
	return 0;			
}
