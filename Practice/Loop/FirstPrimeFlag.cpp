#include<stdio.h>
/*
* find 1st prime in (a, b): tim flag=1, neu k co flag 1 thi bai k co so nguyen to
* Ky thuat dat co: khi for 1 chay, vd i dau= 2 thi gan flag=1, kt neu chay vao for 2---> not prime, neu no het vong chay for 1 van flag 1---> nguyen to
*
*/
int main(){
	int upperBound, lowerBound, flag, i, j;
	
	do{
		printf("Nhap can duoi: ");
		scanf("%d", &lowerBound);
		printf("Nhap can tren: ");
		scanf("%d", &upperBound);
		if(lowerBound>= upperBound)
			printf("Loi, xin nhap lai.\n");
	}while(lowerBound>= upperBound);
	
	for(i= lowerBound+ 1; i< upperBound; i++){
		flag= 1;								//flag= 1: prime
		if(i== 1){								//1: not prime
			i+= 1;								//loai truong hop 1 la so nguyen to
		}
		for(j= 2; j<= i/2; j++){
			if(i% j== 0){
				flag= 0;						//flag= 0: not prime
				break;							//thoat for 2, ve for 1 tang i. Vd (14, 17): 15 flag= 0, break--> i= 16 flag= 0, break--->chay vao if else kt flag duoi
			}
		}
		if(flag== 1){
			printf("So nguyen to dau tien thuoc (%d, %d): %d", lowerBound, upperBound, i);
			break;
		}else
			printf("K co so nguyen to nao thuoc (%d, %d)", lowerBound, upperBound);
			
	}
	return 0;
}
