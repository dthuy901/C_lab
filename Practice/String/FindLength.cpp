#include<stdio.h>
/*
*
* Tim length cua string k dung strlen()
*
*
*/
int main(){
	char arr[20];
	int i;
	printf("Nhap string: ");
	fgets(arr, sizeof(arr), stdin);
	for(i = 0; arr[i] != '\0'; ++i);
	printf("Len= %d", i - 1);
	return 0;
}
//char s[] = "abc";
//    int i;
//
//    for (i = 0; s[i] != '\0'; ++i);
//    
//    printf("Length of the string: %d", i);
//    return 0;
//}
