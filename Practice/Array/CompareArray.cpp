#include<stdio.h>
/*
*
* So sanh chuoi khong dung ham strcmp(): Bang nhau neu index cua '\0' cua 2 array bang nhau, tung gia tri tai moi index bang nhau
*
*
*/
bool compareArr(char arr1[], char arr2[]);
int main(){
	char a[] = "Hello";
	char b[] = "Hello";
	char c[] = "Hi";
	printf("So sang chuoi \'%s\' va \'%s\': \n", a, b);
	if(compareArr(a, b))
		printf("Bang nhau");
	else
		printf("Khong bang");
		
	printf("\nSo sang chuoi \'%s\' va \'%s\': \n", b, c);
	if(compareArr(b, c))
		printf("Bang nhau");
	else
		printf("Khong bang");
	return 0;
}
bool compareArr(char arr1[], char arr2[]){
	int i = 0;
	while(arr1[i] == arr2[i] && arr1[i] != '\0' && arr2[i] != '\0'){
		i++;
	}
	
	if(arr1[i] == '\0' && arr2[i] == '\0')
		return true;
	return false;
}
