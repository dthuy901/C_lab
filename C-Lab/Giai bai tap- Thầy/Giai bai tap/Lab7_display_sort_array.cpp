#include<stdio.h>

// Prototypes (Khai bao ham)
void display_array(int array[], int length);
void sort_array(int array[], int length, int order);

int main()
{
	int array[] = {3, 1, 2};
	display_array(array, 3);
	
	// Sap xep tang dan
	sort_array(array, 3, 1);
	display_array(array, 3);
	
	// Sap xep giam dan
	sort_array(array, 3, 0);
	display_array(array, 3);
	
	sort_array(array, 3, 2);
}

// Dinh nghia ham
void display_array(int array[], int length)
{
	for (int i = 0; i < length - 1; i++)
		printf("%d, ", array[i]);
	printf("%d", array[length - 1]);
	printf("\n");
}

void sort_array(int array[], int length, int order)
{
	if (order == 1) // Sap xep tang dan
	{
		for (int i = 0; i < length - 1; i++)
			for (int j = i + 1; j < length; j++)
				if (array[i] > array[j]) // Kiem tra phan tu dung truoc (array[i]) co lon hon phan tu dung sau (array[j]) khong
				{
					// Neu dieu kien if la true thi a[i] va a[j] khong theo thu tu tang dan => doi cho array[i] va array[j]
					int temp = array[i]; array[i] = array[j]; array[j] = temp; 
				}
	}
	else if (order == 0) // Sap xep giam dan
	{
		for (int i = 0; i < length - 1; i++)
			for (int j = i + 1; j < length; j++)
				if (array[i] < array[j]) // Kiem tra phan tu dung truoc (array[i]) co nho hon phan tu dung sau (array[j]) khong
				{
					// Neu dieu kien if la true thi a[i] va a[j] khong theo thu tu giam dan => doi cho array[i] va array[j]
					int temp = array[i]; array[i] = array[j]; array[j] = temp;
				}
	}
	else // Order khong phai la 0 hoac 1
		printf("LOI: Thu tu khong hop le.");
}
