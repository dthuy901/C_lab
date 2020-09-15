#include<stdio.h>
/*
*
* Tim kiem nhi phan, k dung de quy
* Basic: chi tim ra 1 index
* Advance: tim ra nhieu index???
*
*/
int binarySearch(int arr[], int lowerBound, int upperBound, int x);
int main(){
	int arr[]= {1, 3, 6, 7, 9, 10, 13, 16, 18, 20, 22, 31, 40, 42, 44};
	int len = sizeof(arr)/sizeof(arr[0]);
	int x = 31;
	int result = binarySearch(arr, 0, len - 1, 31);
	if(result == -1)
		printf("K ton tai");
	else{
		printf("%d nam o vi tri index %d", x, result);
	}
		
	return 0;
}
int binarySearch(int arr[], int lowerBound, int upperBound, int x){
	int mid;
	
	while(lowerBound < upperBound){
		mid = (lowerBound + upperBound)/2;
		if(x == arr[mid])
			return mid;
		if(x > arr[mid])
			lowerBound = mid + 1;
		if(x < arr[mid])
			upperBound = mid -1;
	}
	return -1;
	
}
