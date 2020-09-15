#include<stdio.h>
int main() {
    int i,j, n, len;
	scanf("%d", &n);
	len= 2*n-1;
	int a[len][len];

	for(i = 0; i <= n-1; i++){	
		a[i][i]= n-i; 
		a[len-1-i][i]= a[i][i];				//ngang
		a[i][len-1-i]= a[i][i];				//doc
		a[len-1-i][len-1-i]= a[i][i];		//tam
		   				
	    for(j= i+1; j <= n-1; j++){			//in  3 3														       
	    	a[i][j]= n-i;					//		2 (tam giac tren duong cheo)
	    	a[len-1-i][j]= a[i][j];			//ngang
	    	a[i][len-1-j]= a[i][j];			//doc
	    	a[j][i]= a[i][j];				//tam
	    	
	    	a[j][len-1-i]= a[j][i];			//doc		in 3
	    	a[len-1-j][i]= a[j][i];  		//			   3 2
				   
		}
	}
	for(i= 0; i< len; i++){					
	    for(j= 0; j< len; j++){	
	        printf("%d ", a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
