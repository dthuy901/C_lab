#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int testCase;  
    char s[100];
    int k; 
    
    for(int i = 0; i < testCase; i++){
        
        scanf("%s", s);

        for(int j = 0; s[j] != '\0'; j++){
            if(j % 2 == 0)
                printf("%c", s[j]);
        }
        printf(" ");
        for(k = 0; s[k] != '\0'; k++){
            if(k % 2 == 1)
                printf("%c", s[k]);
        }
        s[k] = '\0';
        printf("\n");        
    }
    return 0;
}
