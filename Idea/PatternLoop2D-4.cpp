#include<stdio.h>
/*
*  print square outside--> inside             --->  3 3 3 3 3 -----> 2 2 2 ---> 1							
										            3       3        2   2
													3       3        2 2 2
										        	3       3
										       	    3 3 3 3 3
*/
int main(){
	int i, j, n,len;
	scanf("%d", &n);
	len= 2*n-1;
	int a[len][len];

   	for(i= 0; i < n - 1; i++){			    //print out (n - 1) row, 	   	
	    for(j = i; j < len-i; j++){			
	    																	  
	        a[i][j]= n-i;                   //row: 1st --> (n-1)th (top to middle, not include row through a[n-1][n-1])							   
	        a[len-1-i][j]= n-i;         	//row: last row ---> (n-1)th (bottom to middle, not include row through a[n-1][n-1])						  
	        a[j][i]= n-i;                   //col: left--> middle (not include col through a[n-1][n-1]						   	   
	        a[j][len-1-i]= n-i;         	//col: right ---> middle (not include col through a[n-1][n-1])
	    }
	}
	a[n - 1][n - 1] = 1;					//a[n-1][n-1]
		    
	for(i= 0; i< len; i++){				   //Printing out the 2D array
	    for(j= 0; j< len; j++){
	        printf("%d ",a[i][j]);
	    }
	    printf("\n");
	}
	return 0;
}
