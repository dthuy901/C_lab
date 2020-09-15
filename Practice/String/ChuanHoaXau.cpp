#include<stdio.h>
#include<string.h>
/*
*
* Nhap xau, dem so tu, chuan hoa xau (xoa het ki tu spcace thua, chi in hoa chu cai dau tien)
*
*/
bool isAlphabetic(char c);
int countWords(char s[]);
void standardize(char s[], int len);
int main(){
	char s[20];
	int len;
	printf("Nhap chuoi: ");
	scanf("%[^\n]", &s);
	len = strlen(s);
	printf("Count words: %d", countWords(s));
	printf("\nXau sau khi duoc chuan hoa: ");
	standardize(s, len);
	return 0;
}

bool isAlphabetic(char c){
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return true;
	else
		return false;
}
int countWords(char s[]){
	int count;
	count = 0;
	bool isWorking = true;
	for(int i = 0; s[i] != '\0'; i++){
		if(isAlphabetic(s[i])){
			if(isWorking){
				count++;
				isWorking = false;
			}	
		}else
			isWorking = true;
	}
	return count;
		
}
void standardize(char s[], int len){
	if(s[0] == ' '){					//Xoa khoang trang dau
		while(s[0] == ' '){
			for(int i = 0; i < len; i++){
				s[i] = s[i + 1];
			}
		}
		s[len] = '\0';	
	}
	if(s[len - 1] == ' '){				//Xoa khoang trang cuoi
		while(s[len - 1] == ' '){
			len--;	
		}
		s[len] = '\0';
	}
	
	for(int j = 0; s[j] != '\0'; j++){
		if(isAlphabetic(s[j])){
			if(s[j] >= 'A' && s[j] <= 'Z')
				s[j] += 32;
		}
	}
	s[0] -= 32;
	printf("%s", s);
}
