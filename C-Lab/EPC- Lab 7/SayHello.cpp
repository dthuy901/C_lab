#include<stdio.h>
#include<string.h>
/*
*
* viet function nhan ten nhu tham so va hien thi loi chao
*
*
*/

void sayHello(char name[]);
int main(){
	char name[20];
	printf("Nhap ten: ");
	scanf("%s", name);
	sayHello(name);
	return 0;
}

void sayHello(char name[]){
	printf("Hello, %s!", name);
	return;
}

