#include<stdio.h>
/*
*
* Dao nguoc chuoi: using cursor;
* 1234---> 4321
*
*/
void Reverse(){
    char c;
    scanf("%c", &c);
    if(c != '\n'){
        Reverse();
        printf("%c", c);
    }
}
 
int main(){
    printf("Enter you sentence: ");
    Reverse();
}
