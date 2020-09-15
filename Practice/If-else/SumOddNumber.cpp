#include<stdio.h>

int main() {
    int n, sum;
    sum = 0;

    scanf("%d", &n);
    if(n % 2 == 0)
        n -= 1;
    for(int i= n; i>= 1; i-= 2)
        sum += i;
    printf("%d", sum);
    return 0;
}
