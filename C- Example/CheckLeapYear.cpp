#include<Stdio.h>
/*
* 
* Check leap year: is exactly divisible by 4 except century years
* Century year is a year only if it is perfectly divisible by 400
*
*
*/
int main(){
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);
	if(year % 400 == 0)
		printf("%d is leap year", year);
	else if(year % 100 == 0)
		printf("Not a leap year");
	else if(year % 4 == 0)
		printf("%d is leap year", year);
	else
		printf("Not a leap year");
	return 0;
}
