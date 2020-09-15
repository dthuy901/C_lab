#include<stdio.h>
int main() {
    int i,j, n, len;
	scanf("%d", &n);
	len= 2*n-1;
	int a[len][len];

	for(i=0; i<= n-1; i++){	
		a[i][i]= n-i;   				//duong cheo qua tam arr[n-1][n-1] (quadrant II) 
	    for(j= i+1; j<= n-1; j++){																  //Ex: n=3   3 3 3       
	        a[j][i]= n-i;					//col (quadrant II)										  		  3 2 2	 <--Quadrant II
			a[i][j]= n-i;      				//row (quadrant II)										  		  3 2 1  			
	    }
	}	
	
	for(i=0; i <= n -1; i++){					//Quadrant I vs Quadrant II, doi xung nhau qua duong thang di qua arr[n-1][n-1]
	    for(j = 0; j < n - 1; j++){
			a[i][len-1-j]= a[i][j];
		}
	}
	
	for(i= 0; i< n-1; i++){					//quandrant III, IV doi xung voi Quandrant I, II 
		for(j= 0; j< len; j++){
			a[len-1-i][j]= a[i][j];
		}
	}
	for(i= 0; i< len; i++){					//Printing out the 2D array
	    for(j= 0; j< len; j++){	
	        printf("%d ", a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
