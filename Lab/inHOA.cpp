#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	char s[30];
	FILE *f;
	
	printf("Nhap chuoi: ");
	fflush(stdin);
	gets(s);
	
	
	n=strlen(s);
	f=fopen("character.txt", "w");
	if(f!=NULL)
	{
		printf("Cac ki tu in hoa: ");
		for(int i=0; i<n; i++)
		{
			if(s[i]>='A'&& s[i]<='Z')
			{
				putchar('\t');
				putchar(s[i]);
				fprintf(f, "%c ", s[i]);
			}
		}
		fclose(f);
	}
	else
		printf("Loi file");
}
