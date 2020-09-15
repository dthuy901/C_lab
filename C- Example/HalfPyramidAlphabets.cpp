#include<stdio.h>
/*
*
* Half pyramid of alphabets
* A
* A B
* A B C
* A B C D
*/
int main(){
	char lowerAlpha, upperAlpha;
	printf("Input lower alphabet: ");
	scanf("%c", &lowerAlpha);
	printf("Input upper alphabet: ");
	scanf(" %c", &upperAlpha);
	
	for(int i = 1; i <= (upperAlpha - lowerAlpha + 1); i++){ //row
		for(int j = 1; j <= i; j++){						
			printf("%c ", j + lowerAlpha - 1);	//convert num--> alpha 
		}
		printf("\n");
	}
	return 0;
}
