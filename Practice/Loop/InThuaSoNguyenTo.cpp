
#include<stdio.h>
/*
*
* Phan tich thua so nguyen to: vd 300= 2^2 * 3 * 5^2;
* Y tuong: chia so n cho [2, n], chia li o moi so (vd chia cho toi khi khong chia cho 2 dc nua thi chuyen sang chia cho so khac)
* roy dem so lan chia het cho so do---> ^lan
*
*/
int main(){
	int number, i, count;
	printf("Nhap so: ");
	scanf("%d", &number);
	
	for(i= 2; i<= number; i++){
		count = 0;					//initial lai bien dem mu cho thua so nguyen to tiep theo
		while(number % i == 0){
			count += 1;
			number /= i;
		}
		if(count){			//count= 0: number % i== 1; count>0: number % i == 0; chi co cac so chia dc cho i moi dc thuc thi o block code nay
			if(count> 1){						
				printf("%d^%d", i, count);
			}else{
				printf("%d", i);					//5^1 thi chi can viet la 5
			}
			if(number > 1){							//number= 1 thi dung phep chia, nen number> 1 phia sau van con thua so nguyen to---> can in ra dau * de doi.
				printf("*");
			}
		}
	}
	return 0;
}
