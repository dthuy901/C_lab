#include<stdio.h>
/*
*
* Sap xep day so tang dan: Insertion sort
*
*/
int main(){
	int arr[5], key, i, j;
	printf("Nhap 5 so: \n");
	for(int i = 0; i < 5; i++){
		printf("Nhap so %d: ", i + 1);
		scanf("%d", &arr[i]);
	}
	for(i = 1; i < 5; i++){				//Insertion sort
		key = arr[i];
		j = i -1; 
		
		while(j >= 0 && arr[j] > key){
			arr[j + 1] = arr[j];
			j -= 1;
		}
		arr[j + 1] = key;
	}
	printf("Day so theo thu tu tang dan: ");
	for(i = 0; i < 5; i++){
		printf("%d ", arr[i]);
	}
	return 0;
}
