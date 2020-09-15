#include<stdio.h>

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
	
	int tong = 0;
	
	for (int i = 0; i < n; i++)
	{
		// Kiem tra a[i] co phai la uoc cua b hay ko
		// Kiem tra b mod a[i] co bang 0 hay ko
		if (b % a[i] == 0)
			tong = tong + a[i];
	}
	
	printf("Tong cac uoc so cua %d trong a la: %d", b, tong);
}
