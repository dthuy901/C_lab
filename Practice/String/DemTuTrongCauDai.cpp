#include<stdio.h>
/*
*
* Nhap chuoi dai, nhan enter thi ket thuc va dem bao nhieu tu
*
*
*/
bool checkAlphabetic(char c);
int countWords(char arr[]);
void readLine(char arr[]);
int main(){
	int count;
	char arr[81];
	bool endOfText = false;
	count = 0;
	
	while(!endOfText){
		readLine(arr);
		if(arr[0] == '\0'){
			endOfText = true;
		}else{
			count += countWords(arr);
		}
	}
	printf("Co %d tu", count);
	return 0;
	
}
bool checkAlphabetic(char c){
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return true;
	else
		return false;
}
int countWords(char arr[]){
	int count;
	bool isWorking = true;
	count = 0;
	for(int i = 0; arr[i] != '\0'; i++){
		if(checkAlphabetic(arr[i])){
			if(isWorking){
				count++;
				isWorking = false;
			}
		}else{
			isWorking = true;
		}	
	}
	return count;
}
void readLine(char arr[]){
	char character;
	int i;
	i = 0;
	do{
		character = getchar();
		arr[i] = character;
		++i;
	}while(character != '\n');
	arr[i - 1] = '\0';
}

