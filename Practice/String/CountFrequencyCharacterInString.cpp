#include<stdio.h>
/*
* Find the frequency character
* Vd: Hello I am Ben
* enter a character to find its frequency: e
* ---> 2
*/
int countFrequency(char arr[], char c);
int main(){
	char arr[20], c;
	printf("Enter a string.");
	fgets(arr, sizeof(arr), stdin);
	printf("Enter a character to find its frequency: ");
	scanf("%c", &c);
	printf("Frequency of %c = %d", c, countFrequency(arr, c));
	return 0;	
}
int countFrequency(char arr[], char c){
	int count = 0;
	char sameChar;
	if(c >= 'A' && c <= 'Z'){
		sameChar = c + 32;
	}else if(c >= 'a' && c <= 'z'){
		sameChar = c - 32;
	}
	for(int i = 0; arr[i] != '\0'; i++){
		if(arr[i] == c || arr[i] == sameChar){
			count++;
		}
	}
	return count;
}
