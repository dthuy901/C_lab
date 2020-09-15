#include<stdio.h>
/*
* Sap xep noi bat: for(int i= 0; i < n -1; i++)
*						for(int j= 0; j < n - i -1; j++)
*							arr[j] > arr[j + 1]
* Lí do: i < n -1, lí do j < n - i -1: tranh lap lai viec sap xep da lam o buoc chay truoc
* Ham: swap, ham bubble, ham xuat arr
*/
void swap(int &a, int &b);
void bubbleSort(int arr[], int n);
void exportArr(int arr[], int n);

int main(){
	int arr[]= {64, 34, 25, 12, 11, 90};
	int n;
	n= sizeof(arr)/sizeof(arr[0]);
	bubbleSort(arr, n);
	printf("Mang da duoc sap xep: ");
	exportArr(arr, n);
	return 0;
}
void swap(int &a, int &b){				//pass by reference
	int temp;
	temp = a;
	a = b;
	b = temp;
}
void bubbleSort(int arr[], int n){			//neu khong swap--> arr da sap xep xong--. break, neu con swap---> thuc hien loop tiep
	bool isSwapped = false;
	for(int i = 0; i < n -1; i++){
		isSwapped = false;					//flag chan, khoi tao lai false de tranh neu vong lap truoc true, thi neu khong lot vao if van mang gia tri true
		
		for(int j = 0; j < n- 1- i; j++){
			if(arr[j] > arr[j+ 1]){
				swap(arr[j], arr[j+ 1]);
				isSwapped = true;
			}
		}
		if(isSwapped == false){
			break;
		}
	}
}
void exportArr(int arr[], int n){
	for(int i = 0; i < n; i++){
		printf("%d ", arr[i]);
	}
}
