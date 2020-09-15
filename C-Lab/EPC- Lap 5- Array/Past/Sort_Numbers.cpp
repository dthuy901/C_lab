#include<stdio.h> //y tuong: nhap mang 1 chieu. 2 vong for so sanh s[i] vs s[i+1], neu nho hon thi gan vs temp doi cho s[i] vs s[i+1], het vong lap mang da dc
int main()         //duoc sap xep. ket thuc vong lap in ca mang ra.
{
	int n, temp, s[30]; //khai bao mang 1 chieu
	
	printf("Nhap n= ");
	do{                                                    //chu y dung do while khi nnhap n, vi co truong hop n am, n=0
		scanf("%d", &n);
		if(n<=0)
			printf("Loi: n phai duong. Nhap lai n= ");
		}while(n<=0);
		
	for(int i=0; i<n; i++)
	{	printf("Nhap so %d: ", i+1);
		scanf("%d", &s[i]);
	}
	for(int i=0; i<=n-2; i++) 				  	
	{	for(int j=i+1; j<=n-1; j++)
		{	if(s[i]>s[j])
			{	temp=s[i];
				s[i]=s[j];
				s[j]=temp;
			}
		} /*printf("%d", s[i]); 			//SAI	//vd: n=4 {1,2,3,4} thi i chay ngang i<=2 (3), khi printf chi in ngang i=2, mat di i cuoi: 1 2 3
			putchar('\t');*/
	}
			
	
	
	
	printf("Thu tu tang dan cac so da nhap:\n");
   	for (int i = 0; i < n; i++) 
		printf(" %d ", s[i]); //vi mang da duoc sap xep nen printf s[i] ra het luon la mang da duoc sap xep
	
	}

	
		
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

