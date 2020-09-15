#include<stdio.h>
/*
*
* Time Difference: 12:34:55 - 8:12:15 = 4:22:40
*
*
*/
typedef struct timeDifference{
	int hour;
	int min;
	int sec;
}time;
time timeSubtract(time a, time b);
int main(){
	time t1, t2, result;
	printf("Enter the start time (hour, min, second): ");
	scanf("%d %d %d", &t1.hour, &t1.min, &t1.sec);
	printf("Enter the stop time (hour, min, second): ");
	scanf("%d %d %d", &t2.hour, &t2.min, &t2.sec);
	result = timeSubtract(t1, t2);
	printf("Time difference: %d:%d:%d - %d:%d:%d = %d:%d:%d", t2.hour, t2.min, t2.sec, t1.hour, t1.min, t1.sec, result.hour, result.min, result.sec);
	return 0;

}
time timeSubtract(time a, time b){
	time temp;
//	if(b.sec >= a.sec)
//		temp.sec = b.sec - a.sec;
//	else{
//		temp.sec = 60 + b.sec - a.sec;
//		if(b.min >= a.min + 1)
//			b.min -= 1;
//		else{
//			b.hour -= 1;
//			b.min = 60 + b.min - 1;
//		}
//	}
//	
//	if(b.min >= a.min)
//		temp.min = b.min - a.min;
//	else{
//		temp.min = 60 + b.min - a.min;
//		b.hour -= 1;
//	}
//	temp.hour = b.hour - a.hour;

	if(a.sec > b.sec) {
      --b.min;
      b.sec += 60;
   	}
   	temp.sec = b.sec - a.sec;
   	if(a.min > b.min) {
      --b.hour;
      b.min += 60;
   	}
   	temp.min = b.min - a.min;
   	temp.hour = b.hour - a.hour;
   	
	return temp;
		
}
