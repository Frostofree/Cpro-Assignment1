#include <stdio.h>


void main(){

    int i,N,counter; 
    printf("Enter a Number :");
    scanf("%d",&N);
    
    i = 1 ; counter = 0 ;
    while(N != 0){
 
      N = N / 10 ; 
      counter++ ;       
    } 

    

    printf("The Number of Digits is %d\n",counter) ;  

}