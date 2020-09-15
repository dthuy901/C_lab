#include<stdio.h>
int main(){
	float mathScore, englishScore, literatureScore, average;
	printf("Nhap diem toan: ");
	scanf("%f", &mathScore);
	printf("Nhap diem anh van: ");
	scanf("%f", &englishScore);
	printf("Nhap diem van: ");
	scanf("%f", &literatureScore);
	
	average= (mathScore+ englishScore+ literatureScore)/ 3;
	if(average< 4)
		printf("Yeu: %.2f", average);
	else if(average< 6.5)
		printf("Trung binh: %.2f", average);
	else if(average< 8)
		printf("Kha: %.2f", average);
	else
		printf("Gioi: %.2f", average);
	return 0;
}
