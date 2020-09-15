#include<stdio.h>
/*
*
*
* Viet hoa moi chu cai dau tien cua chuoi
*
*
*/
bool isAlpha(char c);
void uppercaseCaramel(char s[]);
int main(){
	char s[20];
	printf("Nhap chuoi: ");
	fgets(s, sizeof(s), stdin);
	printf("Chuoi caramel: \n");
	uppercaseCaramel(s);
	return 0;
	
}
bool isAlpha(char c){
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return true;
	return false;
}
void uppercaseCaramel(char s[]){
	bool isWorking = true;
	for(int i = 0; s[i] != '\0'; i++){
		if(isAlpha(s[i])){
			if(isWorking){
				s[i] -= 32;
				isWorking = false;
			}
		}else
			isWorking = true;
	}
	printf("%s", s);
	
}
