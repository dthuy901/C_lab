#include<stdio.h>
int main() {

    int i,j, n;
	scanf("%d", &n);
	int a[2*n-1][2*n-1];

	for(i=0; i<= n; i++){	
	    for(j= i+1; j<= n; j++){
	    	
	        a[i][i]= n-i;   		//duong cheo qua tam arr[n-1][n-1] (quadrant 2)        Ex: n=3   3 3 3       
	        a[j][i]= n-i;			//first row (quadrant 2)										 3 2 2	 <--Quadrant II
			a[i][j]= n-i;      		//left column (quadrant 2)										 3 2 1  
			
			a[i][2*n-2-j]= n-i;
			a[i][2*n-2]= n-i;
	    }
	}	
	for(i= 0; i<= n-1; i++){
	    for(j= 0; j< 2*n-1; j++){
	    	
	        printf("%d ", a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
