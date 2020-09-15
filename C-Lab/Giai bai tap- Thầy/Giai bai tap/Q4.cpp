#include<stdio.h>

struct hocvien
{
	char tenhocvien[50];
	float toan;
	float van;
	float ketqua;
};

int main()
{
	int n = 5;
	struct hocvien manghv[5];
	
	// Nhap thong tin hoc vien
	for (int i = 0; i < n; i++)
	{
		printf("Thong tin hoc vien %d: \n", i + 1);
		printf("Ten: "); scanf(" %s", &manghv[i].tenhocvien);
		printf("Toan, van: "); scanf(" %f %f", &manghv[i].toan, &manghv[i].van);
		printf("-----------------------------\n");
	}
	
	// In thong tin hoc vien dau
	printf("Cac hoc vien dau la:");
	for (int i = 0; i < n; i++)
	{
		// Tinh ket qua
		manghv[i].ketqua = (manghv[i].toan * 2 + manghv[i].van)/3;
		if (manghv[i].ketqua >= 5)
			printf("\n%s\t%.2f", manghv[i].tenhocvien, manghv[i].ketqua);
	}
}
