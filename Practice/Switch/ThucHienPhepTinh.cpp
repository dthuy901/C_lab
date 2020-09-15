#include<stdio.h>
/*
* Nhap vao 2 so nguyen a, b
* Nhap vao phep toan + - * /
* Thuc hien tinh toan theo phep toan nhap vao voi 2 so a, b
*/
int main(){
	int number1, number2, status;
	
	printf("Nhap so a: ");
	scanf("%d", &number1);
	printf("Nhap so b: ");
	scanf("%d", &number2);
	printf("Phep toan ban muon thuc hien: \n1. Cong\n2. Tru\n3. Nhan\n4. Chia\n");
	printf("Lua chon cua ban: ");
	scanf("%d", &status);
	
	switch(status){
		case 1:
			printf("Ket qua cua %d + %d= %d", number1, number2, number1 + number2);
			break;
		case 2:
			printf("Ket qua cua %d - %d= %d", number1, number2, number1 - number2);
			break;
		case 3:
			printf("Ket qua cua %d * %d= %d", number1, number2, number1 * number2);
			break;
		case 4:
			if(number2== 0)
				printf("Khong the thuc hien phep tinh");
			else{
				printf("Ket qua cua %d / %d= %.2f", number1, number2, (float)number1 / number2);
			}
			break;
		default:
			printf("Lua chon khong ton tai.");
	}			
	return 0;
}
