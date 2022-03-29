#include <stdio.h>
#include <math.h>

void main(){
       
       int a,i; float b ;
    printf("Enter a Number:");

    scanf("%d",&a);


    i= 1 ; 
    while(i<=a){
          b = fmod(a,i);

          if(b==0){

              printf("%d ",i);
                 }
           
              
              //goto A ;

           //A :

            i = i + 1 ; 
         }


}