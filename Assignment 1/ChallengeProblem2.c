#include <stdio.h>

void main(){

    int a,i,b;
 
    printf("Enter an Integer whose Multipication table you want :");
     scanf("%d",&a);
     printf("Enter The number of Rows required:");
     scanf("%d",&b);

     i= 1 ;
begin:

    if(i<=b) {
    
            int product = a*i;

         printf("%d X %d = %d\n",a,i,product);

         i = i + 1 ;
    }   
    
    else goto end;
    
    
    
goto begin; 


end:

printf("The table is complete\n");


};