#include<stdio.h>
#include<string.h>
/*
*
* Nhap character c, chuoi s, neu c co trong s thi in ra index dau tien cua c trong s
* Neu khong ton tai thi in ra -1. Loi dung tinh chat cua break, gap break 
* Chu y:  flag= -1, trong vong if  break, sau do printf  ra, neu la ton tai thi in index, khong ton tai thi in -1
*/

int main() {
    char c;
    char s[20];
    int len, flag;
    flag= -1;
    scanf("%c", &c);
    scanf("%s", s);
    len= strlen(s);
    for(int i = 0; i < len; i++){
        if(s[i] == c){
        	flag= i;
            break;
        }
    }
    printf("%d", flag);
    
    return 0;
}

