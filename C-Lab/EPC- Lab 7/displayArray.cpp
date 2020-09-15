#include<stdio.h>
/*
*
* truyen vao arr va len---> output: xuat tung phan tu cua arr
*
*
*/
void displayArray(int arr[], int len);
void increaseArr(int arr[], int len);
void decreaseArr(int arr[], int len);
void swap(int &a, int &b);

int main(){
	int arr[20];
	int len, choice;
	char nextChoice;
	
	do{
		printf("Nhap len: ");
		scanf("%d", &len);
	}while(len > 20);
	
	for(int i = 0; i < len; i++){
		scanf("%d", &arr[i]);
	}
	
	printf("====Xuat mang goc:====\n");
	displayArray(arr, len);
	
	printf("\nHello, ban muon sap xep mang theo thu tu nao?");
	printf("\n1. Tang dan.\n2. Giam dan");
	
	do{
		printf("\nSu lua chon cua ban: ");
		scanf("%d", &choice);
		
		if(choice == 1){
			printf("Tang dan: ");
			increaseArr(arr, len);
			displayArray(arr, len);
		}else if(choice == 2){
			printf("Giam dan: ");
			decreaseArr(arr, len);
			displayArray(arr, len);
		}else{
			printf("Err, invalid choice");
		}
		
		printf("\nBan muon tiep tuc khong: Y/N");
		scanf("%c", &nextChoice);
	}while(nextChoice != 'Y' || nextChoice != 'y');

	
	return 0;
	
}
void increaseArr(int arr[], int len){			//Easy way to sort
	for(int i = 0; i < len - 1; i++){
		for(int j = i + 1; j < len; j++){
			if(arr[i] > arr[j]){
				swap(arr[i], arr[j]);
			}
		}
	}
}
void decreaseArr(int arr[], int len){			//insertion Sort
	int i, j, key;
	for(int i = 1; i < len; i++){
		key = arr[i];
		j = i - 1;
		while(j >= 0 && arr[j] < key){
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = key;
	}
	
}
void swap(int &a, int &b){						//swap value
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void displayArray(int arr[], int len){
	for(int i = 0; i < len; i++){
		printf("%d ", arr[i]);
	}
}

