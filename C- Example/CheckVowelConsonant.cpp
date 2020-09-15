#include<stdio.h>
/*
*
* Check vowerl/ Consonant character
*
*/
int main(){
	char c;
	scanf("%c", &c);
	if(c < 65 || c > 90 && c < 97 || c > 125){
		printf("Non-alphabetic character");
		return 0;
	}
	switch(c){
		case 'a':
		case 'A':
		case 'u':
		case 'U':
		case 'i':
		case 'I':
		case 'e':
		case 'E':
		case 'o':
		case 'O':
			printf("Vowel!");
			break;
		default:
			printf("Consonant");
			break;
	}	
	return 0;
}
