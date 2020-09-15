#include<stdio.h>

int main()
{
	// Khai bao
	int id[4];
	int age[4];
	int no_devices[4]; // No. (Number) of devices owned
	int n = 4;
	
	// Nhap du lieu tu ban phim
	for (int i = 0; i < n; i++)
	{
		printf("Nhap thong tin doi tuong thu 1\n");
		id[i] = i + 1; // ID bat dau tu 1, tang dan den 4, khong yeu cau nguoi dung phai nhap
		printf("Tuoi: "); scanf("%d", &age[i]);
		printf("So thiet bi thong minh dang so huu: " ); scanf("%d", &no_devices[i]);
		printf("\n");
	}
	
	// Tinh do tuoi trung binh
	int  age_sum = 0;
	for (int i = 0; i < n; i++)
		age_sum = age_sum + age[i];
	float age_avg = (float) age_sum / n;
	
	// Tinh so thiet bi trung binh
	int no_devices_sum = 0;
	for (int i = 0; i < n; i++)
		no_devices_sum = no_devices_sum + no_devices[i];
	float no_devices_avg = (float) no_devices_sum / n;
	
	// Tim chi so cua doi tuong so huu nhieu thiet bi nhat
	int index_max = 0; // Index of max value
	for (int i = 1; i < n; i++)
		if (no_devices[index_max] < no_devices[i])
			index_max = i;
	
	// Tim chi so cua doi tuong so huu nhieu thiet bi nhat
	int index_min = 0; // Index of min value
	for (int i = 1; i < n; i++)
		if (no_devices[index_min] > no_devices[i])
			index_min = i;
	
	printf("=======================BAO CAO========================");
	printf("\n====KHAO SAT VE SO THIET BI THONG MINH DANG SO HUU====");
	printf("\nSo nguoi duoc khao sat: %d", n);
	printf("\nDo tuoi trung binh: %.2f", age_avg);
	printf("\nSo thiet bi dang so huu trung binh: %.2f", no_devices_avg);
	printf("\nDoi tuong dang so huu nhieu thiet bi nhat la doi tuong thu %d, %d tuoi, so huu %d thiet bi.", index_max + 1, age[index_max], no_devices[index_max]);
	printf("\nDoi tuong dang so huu it thiet bi nhat la doi tuong thu %d, %d tuoi, so huu %d thiet bi.", index_min + 1, age[index_min], no_devices[index_min]);
	
	
}
