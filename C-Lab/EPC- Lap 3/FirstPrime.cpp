#include<stdio.h>
/*
* Y tuong la trong vong for 2 neu co so nao chia het cho 1 so bat ki tu 2 toi chinh no thi break khoi vong nay
* 1 so la so nguyen to khi no k chia het cho so 2 cho toi so ke so do, vd: (6, 9): 7 no khong chia het cho j= 2 thì count+= 1, neu count= i-2
*tuc la no chi chia het cho 1 va chinh no----> do la so nguyen to
* De kiem tra khong co so nguyen to nao trong khoan: logic: chay trong khoang do deu bi break o dieu kien i%j== 0----> neu countBreak= so
*number trong khoang do.
*/
int main(){
	int number, lowerBound, upperBound, totalNumber, i, j, count, countBreak;
	count= 0;
	countBreak= 0;
	
	do{
		printf("Nhap can duoi: ");
		scanf("%d", &lowerBound);
		printf("Nhap can tren: ");
		scanf("%d", &upperBound);
		
		if(lowerBound >= upperBound)
			printf("Loi: Can duoi phai nho hon can tren. Xin nhap lai.\n\n");
		
	}while(lowerBound >= upperBound);
	
	for(i= lowerBound+ 1; i< upperBound; i++){
		if(i== 2){
			printf("So nguyen to dau tien trong (%d, %d) la: %d", lowerBound, upperBound, i);
			break;			//break khoi vong lap 1
		}
		for(j= 2; j< i; j++){
			if(i%j== 0){
				countBreak+= 1;
				break;			//break thoat for 2, for 1 tang i, chay vao for 2
			}else{
				count+= 1;
			}		
		}
		if(count== i- 2){	//vd: so 7 khong chia het tu 2 toi 6, tuc la khong chia het i- 2 lan (i: lan luot la cac so thoa man: > lowerBound, < upperBound)
			printf("So nguyen to dau tien trong (%d, %d) la: %d", lowerBound, upperBound, i);
			break;				//break khoi vong lap 1
		}
	}
	
	totalNumber= upperBound- lowerBound -1;
	if(countBreak== totalNumber)
		printf("Khong co so nguyen to nao trong (%d, %d)", lowerBound, upperBound);

	return 0;
}
