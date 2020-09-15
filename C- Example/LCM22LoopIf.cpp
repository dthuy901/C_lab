#include<stdio.h>
/*
*
* Tim BCNN cua 2 so: 
* LCM
*
*
*/
int main(){
	int a, b, lcm, max, step;
	printf("Nhap a, b: ");
	scanf("%d %d", &a, &b);
	
	if(a > b)
		max = step = a;
	else
		max = step = b;
	
	while(1){
		if(max % b == 0 && max % a == 0){
			lcm = max;
			break;
		}
		max += step;
	}	
	printf("GCD of a, b: %d", lcm);
	return 0;
}
