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
	printf("Input lower, upper alphabet: ");
	scanf("%c %c", &lowerAlpha, &upperAlpha);
//	printf("Input upper alphabet: ");
//	scanf("%c", &upperAlpha);
	for(int i = 1; i <= (upperAlpha - lowerAlpha + 1); i++){
		for(int j = 1; j <= i; j++){
			printf("%c ", j + lowerAlpha - 1);
		}
		printf("\n");
	}
	return 0;
}
