#include <stdio.h>
int main()
{
	int card= 1;
	if(card> 1){
		card= card- 1;
		if(card< 7)
			printf("Small card");
	}else
		printf("Ace!");
	
	return 0;	
}
//result: small card
	
