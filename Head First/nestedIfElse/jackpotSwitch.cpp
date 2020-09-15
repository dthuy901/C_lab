#include <stdio.h>
/*
 *train= 37: cong 50
 *train= 65: printf: jackpot, cong them 80 tiep cong 20
 *train= 12: cong them 20
 *khac: printf: you lose
 */
int main(){
	int train;
	do{
		printf("Nhap: ");
		scanf("%d", &train);
		
		switch(train){
			case 37:
				train+= 50;
				break;
			case 65:
				printf("Jackpot!\n");
				train+= 80;
			case 12:
				train+= 12;
				break;
			default:
				train= 0;
				printf("You lose\n");
		}
		printf("Money: %d\n\n", train);
		train= 0;
	}while(train= 1000);
}
