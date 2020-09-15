#include<stdio.h>
#include<string.h> //https://www.geeksforgeeks.org/c-program-check-given-string-palindrome/ //function
int main() 			//https://stackoverflow.com/questions/4138827/check-string-for-palindrome
{	char s[30];
	int l=0, h; //l= low, h=high, 
	printf("Nhap xau ki tu: ");	//algorithm: so sanh s[0] vs s[n-1] roy tang 2 chi so ben trong. dk vong lap la: high>low
	fflush(stdin);
	gets(s);
	
	h=strlen(s)-1; //-1 vi abcd co n=4, mang chay tu 0 toi 3.
	while(h>l)
	{	//if(strcmp(s[l], s[h])==0   //SAI, vi so sanh 2 chuoi, bai tap can so sanh tung ki tu
		if(s[l]!=s[h])
		{	printf("Xau khong doi xung");
			return 1;
		}
		++l;
		--h;
	}	
	printf("Xau doi xung");
}
	
	
	
	
