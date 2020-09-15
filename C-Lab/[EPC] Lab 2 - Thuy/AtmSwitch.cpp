#include<stdio.h>
int main()
{
	int password, choose, money, rb, newBalance;
	//Thong bao va sau do nhap PIN tu ban phim
	printf("Nhap PIN: ");
	scanf("%d",&password);
	if(password != 1234) 
	printf("\nSai PIN, the cua ban da bi khoa");
	else{
		printf("\nXin chao, so du hien tai cua ban la: 10000000 VND. \n\nBan muon thuc hien giao dich nao? \n1. Nop tien \n2. Rut tien");
		printf("\n\nLua chon cua ban :");
		scanf("%d", &choose);
		rb=10000000;
		switch(choose){
			case 1:
				printf("\nNhap so tien muon nop: ");
				scanf("%d", &money);
				newBalance= rb+ money;
				printf("\nGiao dich thanh cong, so du hien tai la %d \'VND'", newBalance);
				break;
			case 2:
				printf("\nNhap so tien can rut: ");
				scanf("%d", &money);
			
				newBalance= rb- money;
				if (money<= rb)
					printf("\nGiao dich thanh cong, so du hien tai la %d \'VND'", newBalance);
    			else 
    				printf("\nSo du hien tai khong du de thuc hien giao dich");
    			break;
			default:
				printf("\nINVALID CHOICE: Lua chon khong ton tai");
			
		}
	}
	return 0;
}	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

