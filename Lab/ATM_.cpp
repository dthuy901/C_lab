#include<stdio.h>
int main()
{
	int p, c, m, rb, nb;
	//Thong bao va sau do nhap PIN tu ban phim
	printf("Nhap PIN: ");
	scanf("%d",&p);
	if(p!=1234) 
	printf("\nSai PIN, the cua ban da bi khoa");
	else 
	{
		printf("\nXin chao, so du hien tai cua ban la: 10000000 VND. \n\nBan muon thuc hien giao dich nao? \n1. Nop tien \n2. Rut tien");
		printf("\n\nLua chon cua ban :");
		scanf("%d", &c);
		rb=10000000;
	
			if (c==1)
			{
				printf("\nNhap so tien muon nop: ");
				scanf("%d", &m);
				nb=rb+m;
				printf("\nGiao dich thanh cong, so du hien tai la %d \'VND'", nb);

			}
	
			else if (c==2)
			{
				printf("\nNhap so tien can rut: ");
				scanf("%d", &m);
			
				nb=rb- m;
				if (m<=rb)
					printf("\nGiao dich thanh cong, so du hien tai la %d \'VND'", nb);
    			else 
    				printf("\nSo du hien tai khong du de thuc hien giao dich");
			}
	
	
			else if (c!=1 && c!=2)
				printf("\nINVALID CHOICE: Lua chon khong ton tai");

	}
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

