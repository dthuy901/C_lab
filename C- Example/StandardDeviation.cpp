#include<stdio.h>
#include<math.h>
/*
*
* Tinh do lech chuan using array
*
*
*/
void inputArr(float arr[], int len);
void exportArr(float arr[], int len);
float calcStandardDeviation(float arr[], int len);
int main(){
	float arr[20];
	int len;
	do{
		printf("Nhap len: ");
		scanf("%d", &len);
	}while(len <= 0 || len > 20);
	
	printf("Nhap arr: \n");
	inputArr(arr, len);
	
	printf("Xuat arr: \n");
	exportArr(arr, len);
	
	printf("Do lech chuan la: %.2f", calcStandardDeviation(arr, len));
	return 0;
	
}
float calcStandardDeviation(float arr[], int len){
	float sum, mean, sd;
	sum = 0.0, sd = 0.0;
	for(int i = 0; i < len; i++){
		sum += arr[i];
	}
	mean = sum / len;
	for(int i = 0;  i < len; i++){
		sd += pow(arr[i] - mean, 2);
	}
	return sqrt(sd / len);
}
void inputArr(float arr[], int len){
	for(int i = 0; i < len; i++){
		printf("Nhap arr[%d] = ", i);
		scanf("%f", &arr[i]);
	}
}
void exportArr(float arr[], int len){
	for(int i = 0; i < len; i++){
		printf("arr[%d] = %f\n", i, arr[i]);
	}
}
