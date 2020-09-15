#include<stdio.h>
#include<string.h>
/*
*
* Sap xep cac chuoi string nhap vao theo thu tu tang dan alpha
*
*/
int main(){
	char arr[5][20], temp[20];
	printf("Enter 5 words: \n");
	for(int i = 0; i < 5; i++){
		fgets(arr[i], sizeof(arr[i]), stdin);
	}
	for(int i = 0; i < 5; i++){
		for(int j = i + 1; j < 5; j++){
			if(strcmp(arr[i], arr[j]) > 0){
				strcpy(temp, arr[i]);
				strcpy(arr[i], arr[j]);
				strcpy(arr[j], temp);
			}
		}
	}
	printf("In the lexicographical order: \n");
	for(int i = 0; i < 5; i++){
		printf("%s", arr[i]);
	}
}
