#include<stdio.h>

int kiem_tra_xuat_hien(int array[], int so);
int dem_so_lan_xuat_hien(int array[], int so, int length);

int main()
{
	int n, b;
	int a[100];
	
	printf("n = "); scanf(" %d", &n);
	printf("b = "); scanf(" %d", &b);
	
	printf("Cac phan tu cua a:\n");
	for (int i = 0; i < n; i++)
	{
		printf("a[%d] = ", i + 1); scanf(" %d", &a[i]);
	}
	
	if (kiem_tra_xuat_hien(a, b, n))
		printf("b co xuat hien trong a.\n");
	else
		printf("b khong xuat hien trong a.\n");
	printf("So lan xuat hien cua %d trong a la: %d", b, dem_so_lan_xuat_hien(a, b, n));
}

int kiem_tra_xuat_hien(int array[], int so, int length)
{
	for (int i = 0; i < length; i++)
		if (array[i] == so)
			return 1; // true
	// chay ra khoi vong for tuc la khong tim thay
	//=> false
	return 0;
}

int dem_so_lan_xuat_hien(int array[], int so, int length)
{
	int dem = 0;
	for (int i = 0; i < length; i++)
		if (array[i] == so)
			dem = dem + 1;
	return dem;
}
