#include<stdio.h>
int main()
{
	float s[30]; //link youtube su dung function: https://www.youtube.com/watch?v=nq8lFOe9ARg
	int flag=0, n, count, max_count=0, max_value= s[0]; //https://www.tutorialspoint.com/learn_c_by_examples/mode_program_in_c.htm
	do
	{	printf("Nhap so hoc sinh n= ");
		scanf("%d", &n);
		if(n<=0)
			printf("Loi: n phai duong. Ban nen nhap lai.\n");
	}while(n<=0);
	
	for(int i=0; i<n; i++)
	{	printf("Diem HS %d: ", i+1);
		scanf("%f", &s[i]);
	}
	for(int i=0; i<n; i++)
	{	count=0; //moi lan tang i thi khoi tao count=0;
		for(int j=0; j<n; j++)
		{	if (s[j]==s[i])
			count++;
		}
		if(count> max_count) 		//nhap n=4: 1 1 1 2 thi i=0: 1 count=3, i=1: 1 count=3, i=2 i count 3, i=3: 2 count=1: not good idea!
		{	max_count= count;
			max_value= s[i];
			
		}
		else if(count==max_count)
			flag= 1;
	} 
		
			printf("Mode la: %d", max_value);
		else if(flag==1);
			printf("Khong co diem pho bien.");
	}
			
		
		
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
	
