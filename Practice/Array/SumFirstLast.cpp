#include<stdio.h>

int main() {
    int n, arr[20], sumFirstLast;
    sumFirstLast = 0;

    scanf("%d", &n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    sumFirstLast= arr[0] + arr[n- 1];
    printf("%d", sumFirstLast);
    return 0;
}
