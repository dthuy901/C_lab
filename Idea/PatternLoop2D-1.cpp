#include<stdio.h>
int main(){
	int i, j, n,len;
	scanf("%d", &n);
	len= 2*n-1;
	int a[len][len];

   	for(i= 0; i< n; i++){					   	
	    for(j= i; j< len-i; j++){			//in het vong ngoai -->in trong --->   3 3 3 3 3 -----> 2 2 2 ---> 1
	    									//									   3	   3	    2   2
	        a[i][j]=n-i;                    //top row							   3       3        2 2 2
	        a[len-1-i][j]=n-i;         		//bottom row						   3       3
	        a[j][i]=n-i;                    //left col						   	   3 3 3 3 3
	        a[j][len-1-i]=n-i;         		//right col
	    }
	}
		    
	for(i= 0; i< len; i++){					//Printing out the 2D array
	    for(j= 0; j< len; j++){
	        printf("%d ",a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
