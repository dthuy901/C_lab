#include<stdio.h>
int main(){
	int arr[10];

	arr[2]= -100;
	arr[5]= 350;
	arr[3]= arr[0] + arr[5];
	arr[9]= 
	arr[5]/10;
	--arr[2];
	
	for(int i= 0; i < 10; i++)
		printf("arr[%d] = %d\n", i, arr[i]);
	return 0;
}
