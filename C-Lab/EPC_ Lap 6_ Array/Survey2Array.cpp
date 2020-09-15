#include<stdio.h>
/*
*
* Dung mang 2 chieu luu gia tri, co 4 doi tuong: moi doi tuong gom id, age, so thiet bi: arr[4][3]
*
*
*/
int main(){
	int arr[4][3];
	int sumAge, sumDevice, maxDevice, minDevice;
	sumAge = 0, sumDevice = 0;
	for(int i = 0; i < 4; i++){
		printf("Nhap thong tin doi tuong thu: ");
		scanf("%d", &arr[i][0]);
		printf("Tuoi: ");
		scanf("%d", &arr[i][1]);
		printf("So thiet bi thong minh dang so huu: ");
		scanf("%d", &arr[i][2]);
	}
	maxDevice = 0;
	minDevice = 0;
	for(int i = 0; i < 4; i++){	
		sumAge += arr[i][1];
		sumDevice += arr[i][2];
		if(arr[i][2] > arr[0][2]){
			maxDevice = i;
			
		}
		if(arr[i][2] < arr[0][2]){
			minDevice = i;
			
		}
	}
	printf("=======================BAO CAO=============================\n");
	printf("======KHAO SAT VE SO THIET BI THONG MINH DANG SO HUU======\n");
	printf("So nguoi duoc khao sat: 4\n");
	printf("Do tuoi trung binh: %.2f\n", (float) sumAge/4);
	printf("So thiet bi trung binh: %.1f\n", (float) sumDevice/4);
	printf("Doi tuong so huu nhieu thiet bi nhat la %d, %d tuoi, so huu %d thiet bi", maxDevice + 1, arr[maxDevice][1], arr[maxDevice][2]);
	printf("\nDoi tuong so huu it thiet bi nhat la %d, %d tuoi, so huu %d thiet bi", minDevice + 1, arr[minDevice][1], arr[minDevice][2]);
	return 0;
}
