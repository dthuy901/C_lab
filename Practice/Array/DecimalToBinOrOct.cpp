#include<stdio.h>
/*
*
* Doi 10 sang he 2, hoac 8: %2 va /2,  %8 va /8
* Cach khong dung array: moi lan tach ra 1 digit thi nhan voi 100, lan 1: count= 1, lan 2: count *= 10...
* Cach dung array: moi lan tach ra 1 digit thi luu digit do tai 1 index, bat dau tu index= 0, 1, 2...: nhung la kq nguoc---> reserve order de co mang dung thu tu
* 10 (10) ---> 2: index 0: 0, index 1: 1, index 2: 0, index 3: 1 index++ luot cuoi = 4, nhung actual index= 3
*/

int main(){
	int reserveNum[20], num, base, index, digit;			//base: he muon chuyen: 2/8, num: so ban dau can chuyen
//	const char baseDigit[2]= {'0', '1'};							//index 0 trung voi 0, 1 trung vs 1, de in ket qua int sang char cua array
	index= 0;												//arr[0]: 1st array element
	
	printf("Nhap so he 10: ");
	scanf("%d", &num);
	
	printf("Hello, ban muon chuyen %d sang he nao: ", num);
	scanf("%d", &base);
	
	do{
		reserveNum[index] = num % base;		//loop 1: digit store at reserveNum[0]
		num /= base;
		index++;							//loop 2: reserveNum[1], loop 3: reserveNum[2]...
	}while(num > 0);						//kq phep chia = 0 thi stop loop.
	
	printf("Ket qua doi sang he %d: ", base);
//	for(index= index - 1; index >= 0; index--){		//reserver arr, index cuoi---> index 0. 
//		digit = reserveNum[index];					//loop 1: so 1 co index= 0- index(loop) = 1, so 4 co index 3 nhung index++ cua loop 4 la 4, nen pha
//		printf("%c", baseDigit[digit]);
//	}

	for(index= index - 1; index >= 0; index--){
		printf("%d", reserveNum[index]);
	}
	return 0;
}
