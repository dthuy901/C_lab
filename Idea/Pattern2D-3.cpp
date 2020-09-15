#include<stdio.h>
int main() {
    int i,j, n, len;
	scanf("%d", &n);
	len= 2*n-1;
	int a[len][len];

	for(i=0; i<= n-1; i++){	
		a[i][i]= n-i;   				//duong cheo qua tam arr[n-1][n-1] (quadrant II)            
	    a[len-1-i][len-1-i]= a[i][i];	//tam
		a[i][len-1-i]= a[i][i];			//doc
		a[len-1-i][i]= a[i][i];			//ngang
		
	    for(j= i+1; j<= n-1; j++){		
							
			a[j][i]= n-i;					//col (quadrant II)										  		  
			a[len-1-j][len-1-i]= a[j][i];	//tam
			a[j][len-1-i]= a[j][i];			//doc
			a[len-1-j][i]= a[j][i];			//ngang
			
			a[i][j]= n-i;      				//row (quadrant II)										  		  			
	    	a[len-1-i][len-1-j]= a[i][j];	//tam
	    	a[i][len-1-j]= a[i][j];			//doc
			a[len-1-i][j]= a[i][j];			//ngang
	    		
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
