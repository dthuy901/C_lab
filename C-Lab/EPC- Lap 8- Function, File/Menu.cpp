#include<stdio.h>
struct Date
{
	int date, month, year;
};
int n=3;
void input_dates(Date s[])
{
	printf("Nhap ngay sinh cua %d hoc vien: \n", n);
	for(int i=0; i<n; i++)
	{
		printf("Hoc vien thu %d (ngay thang nam): ", i+1);
		scanf("%d %d %d", &s[i].date, &s[i].month, &s[i].year);
	}
}

void sort_dates(Date s[])
{
	int ngay, thang, nam;
	for(int i=0; i<=n-2; i++)
	{
		for(int j=i+1; j<=n-1; j++)
		{
			if(s[i].year== s[j].year)
			{
				if(s[i].month== s[j].month)
				{
					if(s[i].date> s[j].date)
					{
						{	
							ngay=s[i].date;
							thang=s[i].month;
							nam=s[i].year;
						}
			
						{
							s[i].date=s[j].date;
							s[i].month=s[j].month;
							s[i].year=s[j].year;
						}	
							
						{
							s[j].date=ngay;
							s[j].month=thang;
							s[j].year=nam;
						}
						
					}
				}
				else if(s[i].month> s[j].month)
				{
					{	
						ngay=s[i].date;
						thang=s[i].month;
						nam=s[i].year;
					}
			
					{
						s[i].date=s[j].date;
						s[i].month=s[j].month;
						s[i].year=s[j].year;
					}	
						
					{
						s[j].date=ngay;
						s[j].month=thang;
						s[j].year=nam;
					}
				}
			}
			else
			{
				if(s[i].year> s[j].year)
				{
					{	
						ngay=s[i].date;
						thang=s[i].month;
						nam=s[i].year;
					}
			
					{
						s[i].date=s[j].date;
						s[i].month=s[j].month;
						s[i].year=s[j].year;
					}	
						
					{
						s[j].date=ngay;
						s[j].month=thang;
						s[j].year=nam;
					}
				}
			}
			
		}
	}
	printf("Danh sach ngay sinh theo thu tu tang dan: \n");
	for(int i=0; i<3; i++)
	{
		printf("%d- %d- %d\n", s[i].date,s[i].month, s[i].year);
	}
	
}

void export_dates(Date s[])
{
	FILE *f;
	f=fopen("menu.txt", "a");
	if(f!=NULL)
	{
		printf("Da ghi ket qua vao file\n");
		for(int i=0; i<n; i++)
		{
			fprintf(f, "%d-%d-%d\n" ,s[i].date, s[i].month, s[i].year);		//	fwrite(&s[i].date,sizeof(int),1,f); ghi ket qua vao file bin
			
		}
		fputc('\n', f);
		fclose(f);
		
	}
	else
		printf("Loi file\n");
}

int main()
{
	Date a[30];
	int c; //c: choose
	do{
	printf("\n==============QUAN LY NGAY SINH CUA SINH VIEN==============\n");
	printf("Chon 1 trong cac lua chon sau: ");
	printf("\n1. Nhap ngay sinh cua 3 hoc vien.");
	printf("\n2. Sap xep ngay sinh theo thu tu tang dan.");
	printf("\n3. In ket qua ra file.");
	printf("\n4. Exit");
	printf("\nLua chon cua ban la: ");
	scanf("%d", &c);
	if(c==1)
		input_dates(a);
	else if(c==2)
		sort_dates(a);
	else if(c==3)
		export_dates(a);
	else if(c<1 || c>4)
		printf("Invalid choice. Pick again.\n");
	}while(c!=4);
	return 0;
}
