#include<stdio.h>
#include<math.h>
/*
*
* Doi tu he 2 sang 8 va nguoc lai
* Doi 2 sang 10, 10 sang 8
* 2 sang 10: % 10 lay chu so cuoi roy * pow(2, count), count= 0, moi lan ++, so /= 10, lap cho den khi so = 0
* tu he 10 sang 8: so % 8, giam /= 10, nhan digit * pow(10, count), count goc = 0;
*/
int main(){
	int num, copyNum;
	int digit, decNum, octNum, baseOrginal, baseConvert, count;
	decNum = 0, octNum = 0;
	count = 0;
	
	printf("Nhap num: ");
	scanf("%d", &num);
	copyNum = num;
	printf("%d dang co he: ", num);
	scanf("%d", &baseOrginal);
	
	printf("%d muon chuyen sang he: ", num);
	scanf("%d", &baseConvert);
	
	
	while(num > 0){									//he 2 or 8 chuyen sang he 10
		digit = num % 10;
		decNum += digit * pow(baseOrginal, count); 
		count++;
		num /= 10;
	}
	count = 1;
	while(decNum > 0){								//10 ve 2 or 8
		octNum += (decNum % baseConvert) * count;
		decNum /= baseConvert;
		count *= 10;
	}
	printf("%d he %d = %d he %d", copyNum, baseOrginal, octNum, baseConvert);
	return 0;
}
