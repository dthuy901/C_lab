#include<stdio.h>
/*
* remove all characters in a string except alphabets
* Enter a string: p2'r-o@gram84iz./
* Output String: programiz
*
*/
//int checkAlphabetic(char c);
int main(){
	char arr[20];
	int i, j;
	printf("Nhap string: ");
	fgets(arr, sizeof(arr), stdin);
	for(i = 0; arr[i] != '\0'; i++){
		while(!(arr[i] >= 'a' && arr[i] <= 'z') && !(arr[i] >= 'A' && arr[i] <= 'Z') && !(arr[i] == '\0')){
			for(j = i; arr[j] != '\0'; j++){
				arr[j] = arr[j + 1];
			}
			arr[j] = '\0';
		}
	}
	
	printf("%s", arr);
	return 0;
}
//int checkAlphabetic(char c){
//	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
//		return 0;
//	return 1;
//}

