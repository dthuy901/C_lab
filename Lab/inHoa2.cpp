#include<stdio.h>
#include<string.h>
int main()
{
	int n, count= 0;
	char s[30];
	
	
	printf("Nhap chuoi: ");
	fflush(stdin);
	gets(s);
	
	
	n=strlen(s);

		for(int i=0; i<n; i++)
		{
			if(s[i]>='A'&& s[i]<='Z')
			{
				count += 1;
			}
			
		}
		printf("co %d tu", count + 1);
		
	}


