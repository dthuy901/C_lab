#include<stdio.h>
int main(){ 
	int n;
	
	int  arr[]= {1, 2, 3, 4, 5, 6, 7, 8, 9};
	
	scanf("%d", &n);
	if(n >= 1 && n <= 9)
	    printf("%d", arr[n - 1]);
	else {
	    printf("Greater than 9");
	}
	
	return 0;
}
