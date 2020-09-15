#include<stdio.h>
struct Date
{
	int date, month, year;
};
int n=3;
void input_dates(struct Date s[])
{
	printf("Nhap ngay sinh cua %d hoc vien: \n", n);
	for(int i=0; i<n; i++)
	{
		printf("Hoc vien thu %d (ngay thang nam): ", i+1);
		scanf("%d %d %d", &s[i].date, &s[i].month, &s[i].year);
	}
}
/*void assign(Date s[], s[].day, s[].month, s[].year)
{	
	int ngay, int thang, int nam;
	for(int i=0; i<=n-2; i++)
	{
		for(int j=i+1; j<=n-1; j++)
		{	{	
				ngay=s[i].day;
				thang=s[i].month;
				nam=s[i].year;
			}
			
			{
				s[i].day=s[j].day;
				s[i].month=s[j].month;
				s[i].year=s[j].year;
			}	
				
			{
				s[j].day=ngay;
				s[j].month=thang;
				s[j].year=nam;
			}
		}	
	}
}*/		

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
	printf("\nDanh sach ngay sinh theo thu tu tang dan: \n");
	for(int i=0; i<3; i++)
	{
		printf("%d- %d- %d\n", s[i].date,s[i].month, s[i].year);
	}
	
}

void export_dates(Date s[])
{
	FILE *f;
	f=fopen("dates.txt", "w");
	if(f!=NULL)
	{
		printf("Da ghi ket qua vao file");
		for(int i=0; i<n; i++)
		{
			fprintf(f, "%d-%d-%d\n" ,s[i].date, s[i].month, s[i].year);		//	fwrite(&s[i].date,sizeof(int),1,f); ghi ket qua vao file bin
			
		}
		fclose(f);
		
	}
	else
		printf("Loi file");
}

int main()
{
	 Date a[30];
	 input_dates(a);
	 sort_dates(a);
	 export_dates(a);
	 return 0;
}
