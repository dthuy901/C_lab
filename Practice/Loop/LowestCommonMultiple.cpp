#include<stdio.h>
/*
* Lowest common multiple (LCM)
* Idea: 40 va 70 thi LCM= 280 (280= 70* 4)
* LCM >= so lon nhat trong 2 so, 
* LCM= se bao gom n lan 70, thi moi chia het cho 70 dc--->Chan ly!!!!
* khong can phan tich cac thua so nguyen to roy lay cac thua so chung va rieng nhu thong thuong---> cach do phuc tap
* step 1: find max
* step 2: max chia het cho so con lai----> LCM= max, 
* nhung neu khong chia het thi max += max0 (ta can gan gia tri max0 cho 1 bien khac de tranh duplicate nhieu gia tri max0) 
* cho den khi chia het cho so con lai, cho 2 cai nay chay trong vong lap
* ta co the dung while vi khong biet so lan lap
*/
int main(){
	int number1, number2, lcm, max, step;			//step= max0
	
	printf("Nhap so thu 1: ");
	scanf("%d", &number1);
	printf("Nhap so thu 2: ");
	scanf("%d", &number2);

	if(number1 > number2){		//step 1: find max
		max= step= number1;			//max0
	}else{
		max= step= number2;			//max0
	}
	
	while(1){											//step 2, vong chay vo han
		if(max % number1 == 0 && max % number2 == 0){	//thay vi max= number1 thi lay max : number2, max= number2 thi lay max : number1
														//nhung ta lai khong biet max la thang nao? nen SOLUTION la lay max chia cho ca 2 lun	
			lcm= max;
			break; 										//break neu tim duoc
		}
		max += step;									//cong don max0 sau do quay lai thuc hien phep chia de tim LCM, neu ghi max += max thi se duplicate rat nhieu max
	}													//vd: max= 70, max += max; (1): max= 140; (2): max= 280 (SAI)---> can gan max0 cho 1 bien khac
	printf("LCM= %d", lcm);	
	return 0;
}
