#include<stdio.h>
#include<string.h>
/*
*
* Kiem tra fgets ket hop voi strlen de dem length
*
*
*/
//int main(){
//	char arr[20];
//	int len;
//	fgets(arr, sizeof(arr), stdin);
//	len = strlen(arr);
//	printf("%d", len);
//}
#include <stdio.h>
#include <string.h>
int main()
{
    char a[20]="Program";
    char b[20]={'P','r','o','g','r','a','m','\0'};

    // using the %zu format specifier to print size_t
    printf("Length of string a = %d \n",strlen(a));
    printf("Length of string b = %d \n",strlen(b));

    return 0;
}
