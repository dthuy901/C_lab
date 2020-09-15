#include<stdio.h>
#include <stdlib.h>
typedef struct dates{
	int day, month, year;
}date;

void input(date* a);
void sortOrder(date* a);
void exportStruct(date* a);
void swap(date* a, date* b);

int main(){
	date* ptr;
	int choose;
	bool inputYet = false;
	ptr = (date*)malloc(3 * sizeof(date));
	do{
		printf("======Chuong trinh quan ly sinh vien======\n");
		printf("1. Nhap danh sach\n2. Sap xep danh sach\n3.Ket thuc");
		printf("\nSu lua chon cua ban: ");
		scanf("%d", &choose);
		
		if(choose == 1){
			input(ptr);
			inputYet = true;
		}else if(choose == 2){
			if(inputYet){
				sortOrder(ptr);
				exportStruct(ptr);
			}else
				printf("You must input data of student first!.\n");
		}else if(choose >= 3 || choose < 1)
			printf("Invalid choice.");
	}while(choose < 3 && choose >= 1);
	
	return 0;
}
void input(date* a){
	printf("Nhap thong tin cua 3 hoc vien\n");
	for(int i = 0; i < 3; i++){
		printf("Hoc vien thu %d (ngay thanh nam): ", i + 1);
		scanf("%d %d %d", &(a + i)->day, &(a + i)->month, &(a + i)->year);	
	}
}
void swap(date* a, date* b){
	date temp;				//temporary variable
	
	temp.year = b->year;
	b->year = a->year;
	a->year = temp.year;
				
	temp.month = b->month;
	b->month = a->month;
	a->month = temp.month;
				
	temp.day = b->day;
	b->day = a->day;
	a->day = temp.day;
}
void sortOrder(date* a){
	for(int i = 0; i < 2; i++){
		for(int j = i + 1; j < 3; j++){
			if((a + j)->year < (a + i)->year){				//Case 1: year2 < year1
				swap((a + j), (a + i));
			}else if((a + j)->year == (a + i)->year){		//Case 2: year2 = year1 
				if((a + j)->month == (a + i)->month){
					if((a + j)->day < (a + i)->day){
						swap((a + j), (a + i));
					}
						
				}else if((a + j)->month < (a + i)->month){
					swap((a + j), (a + i));
				}
			}
		}
	}
}
void exportStruct(date* a){
	printf("Danh sach theo thu tu tang dan ngay sinh: \n");
	for(int i = 0; i < 3; i++){
		printf("%d-%d-%d\n", (a + i)->day, (a + i)->month, (a + i)->year);
	}
}
