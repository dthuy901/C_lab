#include<stdio.h>
/*
* Nhap diem 10 hoc sinh, tinh diem trung binh ca lop
* Tim diem cao nhat, thap nhat
*/
int main(){
	int modeScore, maxCount, count;
	double score[10];
	double average, sum, min, max, mode;					//mang chua diem co the co dau phay, average cung vay
	sum = 0, count = 0;

	printf("Nhap diem cua 10 hoc sinh: \n");
	for(int i = 0; i < 10; i++){
		printf("Diem hoc sinh %d la: ", i+1);
		scanf("%lf", &score[i]);
	}
	min = score[0];
	max = score[0];
	for(int i = 0; i < 10; i++){
		sum += score[i]; 
	}
	average = sum /10;
	
	for(int i = 1; i < 10; i++){
		if(score[i] < min)
			min = score[i];
		if(score[i] > max)
			max = score[i];
	}
	
	//find mode of score:
	for(int i = 0; i < 9; i++){
		count = 0;
		for(int j = i + 1; j < 10; j++){
			if(score[i] == score[j])
				count++;				//dem so lan xuat hien cua tung chu so trong arr
		}
		if(count > maxCount){		//tim so co so lan xuat hien lon nhat, truong hop: so lan xuat hien nhu nhau?
			maxCount= count;
			mode = score[i];
		}
	}
	
	
	
	printf("\nDiem trung binh cua ca lop la: %.2lf", average);
	printf("\nDiem cao nhat la: %.2lf", max);
	printf("\nDiem thap nhat la: %.2lf", min);
	printf("\nMode la: %.2lf", mode);
	return 0;
	
}
