#include<stdio.h>

struct date
{
	int day;
	int month;
	int year;
};

struct date array[3];

int n = 3;

// Prototypes / Khai bao ham
void input_dates(struct date array[]);
int compare_dates(struct date date1, struct date date2); // So sanh 2 ngay, tuong tu ham strcmp
void sort_dates(struct date array[]);
void export_dates(struct date array[]);

int main()
{
	
	input_dates(array);	
	
}

// Dinh nghia ham
void input_dates(struct date array[])
{
	printf("Nhap ngay sinh cua 3 hoc vien:\n");
	for (int i = 0; i < n; i++)
	{
		printf("Hoc vien thu %d (ngay thang nam): ", i + 1);
		scanf(" %d %d %d", &array[i].day, &array[i].month, &array[i].year);
	}
	printf("\n");
}

void sort_dates(struct date array[])
{
	
}

int compare_dates(struct date date1, struct date date2)
{
	if (date1.year == date2.year)
		if (date1.month == date2.month)
			if(date1.day > date2.day)
				return 1;
			else if (date1.day == date2.day)
				return 0;
			else // date1.day < date2.day
				return -1;
		else if (date1.month > date2.month)
			return 1;
		else // date1.month < date2.month
			return -1;
	else if (date1.year > date2.year)
		return 1;
	else // date1.year < date2.year
		return -1;
}
