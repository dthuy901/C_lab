#include<stdio.h>
#include<math.h>
int main(){
	int scp = 0; 
	int n;
	float rs;
	scanf("%d", &n);
    rs = sqrt(n);
    printf("%f", rs);
    if(rs == (int)rs) 
		++scp;
    printf("\nMang co %d so chinh phuong!", scp);
}
