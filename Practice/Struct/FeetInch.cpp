#include<stdio.h>
/*
*
*  1 feet = 12 inch
*	Cong 2 khoang cach chua inch va feet
*
*/
struct distance{
	int feet;
	float inch;
}d1, d2, result;
int main(){
	printf("Enter 1st distance: ");
	printf("\nEnter feet: ");
	scanf("%d", &d1.feet);
	printf("Enter inch: ");
	scanf("%f", &d1.inch);
	printf("\nEnter 2nd distance: ");
	printf("\nEnter feet: ");
	scanf("%d", &d2.feet);
	printf("Enter inch: ");
	scanf("%f", &d2.inch);
	
	result.feet = d1.feet + d2.feet;
	result.inch = d1.inch + d2.inch;
	
	while(result.inch >= 12){
		result.feet++;
		result.inch -= 12;
	}
	printf("Sum of distance = %d\' - %.1f\''", result.feet, result.inch);
	return 0;
}
