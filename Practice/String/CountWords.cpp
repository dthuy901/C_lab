#include<stdio.h>
/*
*
* Dem cau nhap vao co bao nhieu tu
* Phan tich: tao 1 bien bool: isWorking= true, duyet tu dau toi cuoi mang, neu la alpha---> neu isWorking= true thi count++, 
* may ki tu tiep theo cua tu do ommit, isWorking= false, cho toi khi mo gap ki tu != alpha thi isWorking = true, gap alpha lai thi count++
* function: checkAlphabet, countWords, main;
*/
bool checkAlphabetic(char c);
int countWords(char arr[]);
int main(){
	char arr[30];
	printf("Nhap cau: ");
//	fgets(arr, sizeof(arr), stdin);
	scanf("%[^\n]%*c", &arr);
	printf("%s co %d tu", arr, countWords(arr));
	
}
int countWords(char arr[]){
	bool isWorking = true;
	int count;
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
bool checkAlphabetic(char c){
	if(c >= 'A' && c <= 'Z' || c >= 'a' && c <= 'z')
		return true;
	else
		return false;
}
