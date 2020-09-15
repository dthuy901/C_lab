#include<stdio.h>
/*
*
* Dung mang de chua du lieu cho 4 doi tuong: arr cho id, age, device owned
* Roy dung for(i = 0 ---> 4): de lap qua tung index: nhap/ xuat du lieu ung voi tung nguoi
*
*/
int main(){
	int id[4], age[4], noDevice[4];
	int sumAge, sumDevice;
	int maxDevice, minDevice;
	int idMaxDevice, idMinDevice;
	sumAge = 0, sumDevice = 0;
	maxDevice = 0, minDevice = 0;
	
	
	for(int i = 0; i < 4; i++){
		printf("Nhap doi tuong thu %d\n", i + 1);
		printf("Tuoi: ");
		scanf("%d", &age[i]);
		printf("So thiet bi dang so huu: ");
		scanf("%d", &noDevice[i]);
		
		sumAge += age[i];
		sumDevice += noDevice[i];
		
		if(noDevice[i] > maxDevice){
			maxDevice = noDevice[i];
			idMaxDevice = i;
		}
	}
	idMinDevice = 0;
	for(int i = 1; i < 4; i++){
		if(noDevice[i] < noDevice[idMinDevice]){ 		
			idMinDevice = i;
		}
	}
	printf("=======================BAO CAO=============================\n");
	printf("======KHAO SAT VE SO THIET BI THONG MINH DANG SO HUU======\n");
	printf("So nguoi duoc khao sat: 4\n");
	printf("Do tuoi trung binh: %.2f\n", (float) sumAge/4);
	printf("So thiet bi trung binh: %.1f\n", (float) sumDevice/4);
	printf("Doi tuong so huu nhieu thiet bi nhat la %d, %d tuoi, so huu %d thiet bi", idMaxDevice + 1, age[idMaxDevice], noDevice[idMaxDevice]);
	printf("\nDoi tuong so huu it thiet bi nhat la %d, %d tuoi, so huu %d thiet bi", idMinDevice + 1, age[idMinDevice], noDevice[idMinDevice]);
	return 0;
	
}

