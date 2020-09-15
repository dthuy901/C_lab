#include<stdio.h>
/*
* Struct chua thong tin hoc sinh: ten, so, diem
* Hien thi thong tin hoc vien
*
*
*/
struct student{
	char name[10];
	int id;
	float mark;
};
int main(){
	struct student std;
	printf("Enter information: \nEnter name: ");
	scanf("%s", std.name);
	printf("Enter roll number: ");
	scanf("%d", &std.id);
	printf("Enter marks: ");
	scanf("%f", &std.mark);
	printf("Displaying information: \n");
	printf("Name: %s\n", std.name);
	printf("Roll number: %d\n", std.id);
	printf("Marks: %.1f\n", std.mark);
}
