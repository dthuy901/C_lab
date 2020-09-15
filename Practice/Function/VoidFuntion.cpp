#include<stdio.h>
/*
*
* In Hello Kitty n lan
*
*/
void printSnippet(int n);
int main(){
	int n;
	printf("Nhap n: ");
	scanf("%d", &n);
	
	printSnippet(n);
	return 0;
} 

void printSnippet(int n){
	for(int i= 0; i< n; i++){
		printf("%d. Hello Kitty\n", i+1);
	}
}

