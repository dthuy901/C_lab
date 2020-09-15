#include<stdio.h>
/*
* Nhap n doi tuong, moi doi tuong: tuoi, so thiet bi so huu
* Bao cao: So nguoi duoc khao sat, do tuoi trung binh, so thiet bi so huu trung binh
* Doi tuong so huu nhieu thiet bi nhieu nhat/ it nhat? bao nhieu tuoi? bn thiet bi
*
*/
int main(){
	int numPeople, sumAge, sumDeviceOwned, age, deviceOwned, maxDeviceOwned, minDeviceOwned, noMax, noMin, ageMaxDevice, ageMinDevice; 		//no: id of people
	sumAge = 0, sumDeviceOwned = 0, maxDeviceOwned = 0;
	printf("Nhap so luong nguoi muon khao sat: ");
	scanf("%d", &numPeople);
	
	for(int i = 1; i <= numPeople; i++){
		printf("Nhap thong tin doi tuong thu %d\n", i);
		printf("Tuoi: ");
		scanf("%d", &age);
		printf("So thiet bi thong minh dang so huu: ");
		scanf("%d", &deviceOwned);
		sumAge += age;									//cong don tuoi vao bien
		sumDeviceOwned += deviceOwned;
		if(deviceOwned > maxDeviceOwned){
			maxDeviceOwned = deviceOwned;
			noMax = i;
			ageMaxDevice = age;
			
		}
		if(deviceOwned < minDeviceOwned){			//ERROR: minDeviceOwned = 0 thi k co cai nao nho hon, va chua initialize gia tri
			minDeviceOwned = deviceOwned;
			noMin = i;
			ageMinDevice = age;
			
		}
	}
	printf("=======================BAO CAO=============================\n");
	printf("======KHAO SAT VE SO THIET BI THONG MINH DANG SO HUU======\n");
	printf("So nguoi duoc khao sat: %d\n", numPeople);
	printf("Do tuoi trung binh: %.2f\n", (float) sumAge/numPeople);
	printf("So thiet bi trung binh: %.1f\n", (float) sumDeviceOwned/numPeople);
	printf("Doi tuong so huu nhieu thiet bi nhat la %d, %d tuoi, so huu %d thiet bi", noMax, ageMaxDevice, maxDeviceOwned);
	printf("\nDoi tuong so huu it thiet bi nhat la %d, %d tuoi, so huu %d thiet bi", noMin, ageMinDevice, minDeviceOwned);
	return 0;
}
