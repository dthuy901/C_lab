#include<stdio.h>
/*
* Nhap vao chuoi string, dem so nguyen am, phu am, so, space
* abgd1 heko wojf 
*
*/
int main(){
	char arr[20];
	int countVowel, countConsonant, countDigit, countSpace;
	countVowel = 0, countConsonant = 0, countDigit = 0, countSpace = 0;
	printf("Enter a string: ");
	fgets(arr, sizeof(arr), stdin);
	for(int i = 0; arr[i] != '\0'; i++){
		if(arr[i] == 'A' || arr[i] == 'E' || arr[i] == 'I' || arr[i] == 'O' || arr[i] == 'U' || arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u')
			countVowel++;
		else if(arr[i] >= 'A' && arr[i] <= 'Z' || arr[i] >= 'a' && arr[i] <= 'z')
			countConsonant++;
		else if(arr[i] >= '0' && arr[i] <= '9')
			countDigit++;
		else if(arr[i] == ' ')
			countSpace++;
	}
	printf("Number of vowel: %d\n", countVowel);
	printf("Number of consonant: %d\n", countConsonant);
	printf("Number of digit: %d\n", countDigit);
	printf("Number of space: %d", countSpace);
	return 0;
	
}
