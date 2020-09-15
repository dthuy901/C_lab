#include<stdio.h>
int main() 
{

    int n, i, j, length, min;
    scanf("%d", &n);
    length = 2*n- 1;
    for(i=0; i<length; i++){
        for(j=0; j<length; j++){
        	
            min = i < j ? i : j;
            min = min < length-i ? min : length-i-1;		//DAP AN EM XEM TREN MANG
            min = min < length-j-1 ? min : length-j-1;
            printf("%d ", n-min);
            
        }
        printf("\n");
    }
    return 0;
}
