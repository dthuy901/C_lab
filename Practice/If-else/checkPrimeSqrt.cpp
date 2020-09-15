#include<stdio.h>
#include<math.h>
int isPrime(int n)
{   if(n == 0 || n == 1)
        return false;
    for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0)
            return false;
    }
    return true;
}
int main(){
	int n;
	bool result;
	scanf("%d", &n);
	result = isPrime(n);
	if(result)
		printf("Nguyen to");
	else
		printf("K phai nguyen to");
	return 0;
}
