#include <stdio.h>
#include <math.h>

void main(){

    float a,b,c,x,y,z,foo,bar;

    printf("Enter the Components of the first Vector in Order with spaces:");
    scanf("%f %f %f",&a,&b,&c);
    printf("Enter the Components of the Second Vector in Order with spaces:");
    scanf("%f %f %f",&x,&y,&z);

    foo = sqrt(a*a + b*b + c*c);
    bar = sqrt(x*x + y*y + z*z);

    printf("The dot product is: %f\n",foo*bar);


}