#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    char arr[20];
    char arrNum = ['0', '1', '2', '3', '4', '5', '6', '7', '8', '9'];
    int count;

    scanf("%s", arr);
    for(int i = 0; i <= 9; i++){
        count = 0;
        for(int j = 0; arr[j] != '\0'; j++){
            if(arr[j] == arrNum[i])
                count++;
        }
        printf("%d ", count);
    } 
    return 0;
}
