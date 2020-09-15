#include<stdio.h>
int main(){
    int n, i, j, min, length;							//n: number, min: khoang cach nho nhat toi 4 canh hinh vuong
    scanf("%d", &n);
    
    length=2*n- 1;										//chieu dai canh hinh vuong
    for (i=0; i<length; i++){
        for (j=0; j<length; j++){   
        
			min= i < j? i : j;							//so sanh khoang cach tu 1 diem dc in ra den canh tren va canh trai--> tim min	
            min= min < length-i-1 ? min: length-i-1;	//so sanh min voi khoang cach tu diem do den canh duoi  
            min= min < length-j-1 ? min: length-j-1;	//so sanh min voi khoach cach tu diem do den canh phai
//            printf("%d ", n- min);
            
        }
//        printf("\n");        
    }
    return 0;
}
