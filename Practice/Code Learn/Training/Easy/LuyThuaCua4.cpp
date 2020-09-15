#include<stdio.h>
int main(){
	int n, remainder;
	scanf("%d", &n);
	while(n > 1){
		if(n == 1)
			break;
		remainer = n % 4;
		n /= 4;
		
	}
	if(n == 1 && remainder == 0)
		printf("luy thua cua 4");
	else
		printf("k phai luy thua cua 4");
	return 0;
}
