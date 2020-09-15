#include <stdio.h>
struct student {
   char name[50];
   int age;
};

// function prototype
void displayStruct(struct student s);
int main(){
	struct student s;
	printf("Enter name: ");
	scanf("%[^\n]%*c", s.name);
	printf("Enter age: ");
	scanf("%d", &s.age);
	displayStruct(s);
	return 0;
	
}
void displayStruct(struct student s){
	printf("Name: %s\n", s.name);
	printf("Age: %d", s.age);
	
}
