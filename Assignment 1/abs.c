#include <stdio.h>

void main(){

    int a,abs_a;

    begin:
    printf("Enter an Integer Value:",a);

    scanf("%d",&a);

    if(a>=0)
    {
               abs_a = a;
    }

else
{
       abs_a = -a;
}

printf("The absolute value is |%d| = %d\n",a,abs_a);
}
goto begin;