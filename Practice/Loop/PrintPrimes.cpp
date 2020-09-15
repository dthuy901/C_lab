#include<stdio.h>
/*
* 
* In cac so nguyen to nho hon 1000
*
*/
int main(){
	int i, j, flag;
	
	for(i= 2; i< 1000; i++){
		
		flag= 1;					//prime
		for(j= 2; j<= i/2; j++){
			if(i % j== 0){
				flag= 0;			//not prime
				break;
			}
		}
		if(flag== 1){
			printf("%d\t", i);
		}
	}
	
	return 0;
}
