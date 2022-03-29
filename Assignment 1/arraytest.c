#include <stdio.h>

void main(){

    int N,i;

    printf("Enter the number of integers whose sum you want to find:");
    scanf("%d",&N);

    int num[N],sum;

    sum = 0 ;

    for(i=0;i<N;i++){

       printf("Enter a Number :");
       scanf("%d",&num[i]);

      sum = sum + num[i] ;
    }

    printf("The sum is %d\n",sum);
}