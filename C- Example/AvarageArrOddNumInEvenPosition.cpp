#include<stdio.h>
#include<math.h>
#define MAX (100)
/*
*
* Nhap mang so nguyen n phan tu: tinh TBC cac so le o vi tri chan
*
*
*
*/
void avarageArrOddNumInEvenPosition(int arr[], int len);
void inputArr(int arr[], int len);
void exportArr(int arr[], int len);
int findMaxArr(int arr[], int len);
void positionMinArr(int arr[], int len);
void displayPrimeNum(int arr[], int len);
void countSoChinhPhuong(int arr[], int len);
//void replaceNegativeNumByZero(int arr[], int len);
void deleteNegative(int arr[], int &len);
void increaseArrSort(int arr[], int len);

int main(){
	int arr[MAX], len;
	do{
 		printf("Nhap len: ");
 		scanf("%d", &len);
	}while(len <= 0 || len > MAX);
	
	printf("\n===Nhap mang===\n");
	inputArr(arr, len);
	printf("\n===Xuat mang===\n");
	exportArr(arr, len);
	
	avarageArrOddNumInEvenPosition(arr, len);
	
	printf("\nSo lon nhat trong mang: %d", findMaxArr(arr, len));
	
	positionMinArr(arr, len);
	
	printf("\nCac so nguyen to trong mang: ");
	displayPrimeNum(arr, len);
	
	printf("\nSo luong so chinh phuong trong mang: ");
	countSoChinhPhuong(arr, len);
	
//	printf("\nMang sau khi thay the cac so am bang so 0: \n");
//	replaceNegativeNumByZero(arr, len);
	
	printf("\nMang sau khi xoa cac so am: \n");
	deleteNegative(arr, len);
	
	printf("\nMang sap xep tang dan: \n");
	increaseArrSort(arr, len);
	
	return 0;	
}

void inputArr(int arr[], int len){
 	for(int i = 0; i < len; i++){
 		printf("Nhap arr[%d] = ", i);
 		scanf("%d", &arr[i]);
	 }
 }

void exportArr(int arr[], int len){
	for(int i = 0; i < len; i++){
		printf("arr[%d] = %d\n", i, arr[i]);
	}
}

void avarageArrOddNumInEvenPosition(int arr[], int len){
	int sum, count;
	sum = 0, count = 0;
	for(int i = 0; i < len; i += 2){
		if(arr[i] % 2 == 1){
			sum += arr[i];
			count++;
		}
	}
	if(count)
		printf("Trung binh cong cua cac so le tai vi tri chan: %.2f", (float)sum/count);
	else
		printf("Khong co so le tai vi tri chan");
}
int findMaxArr(int arr[], int len){
	int max;
	max = arr[0]; 
	for(int i = 1; i < len; i++){
		if(arr[i] > max)
			max = arr[i];
	}
	return max;
}
void positionMinArr(int arr[], int len){
	int min;
	min = arr[0];
	printf("\nCac vi tri cua so nho nhat trong mang: ");
	for(int i = 0; i < len; i++){
		if(arr[i] <= min){
			printf("%d ", i);
		}
	}
}
void displayPrimeNum(int arr[], int len){
	int flag, countNoPrime; 
	countNoPrime = 0;
	
	for(int i = 0; i < len; i++){
		flag = 1;
		for(int j = 2; j <= arr[i]/2; j++){
			if(arr[i] % j == 0){
				flag = 0;
				countNoPrime++;
				break;
			}
		}
		if(flag == 1)
			printf("%d ", arr[i]);
		
	}
	if(countNoPrime == len)
		printf("No prime numbers");
	
}
void countSoChinhPhuong(int arr[], int len){
	float result;
	int count = 0;
	for(int i = 0; i < len; i++){
		result = sqrt(arr[i]);
		if(result == (int)result)
			count++;
	}
	if(count)
		printf("%d", count);
	else
		printf("Khong co so chinh phuong trong mang");
}
//void replaceNegativeNumByZero(int arr[], int len){
//	int count;
//	count = 0;
//	for(int i = 0; i < len; i++){
//		if(arr[i] < 0){
//			arr[i] = 0;
//			count++;
//		}		
//	}
//	if(count == 0)
//		printf("Mang khong co so am");
//	else
//		exportArr(arr, len);
//}
void deleteNegative(int arr[], int &len){
	int flag = 0;
	for(int i = 0; i < len; i++){
		while(arr[i] < 0){
			for(int j = i; j < len - 1; j++){
				arr[j] = arr[j + 1];
				flag = 1;
			}
			len--;
		}
	}
	if(flag)
		exportArr(arr, len);
	else
		printf("Mang khong co phan tu am");
}
void increaseArrSort(int arr[], int len){
	for(int i = 1; i < len; i++){
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && key < arr[j]){
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = key;
	}
	exportArr(arr, len);
	
}
