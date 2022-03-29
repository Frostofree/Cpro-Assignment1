#include <stdio.h>

void main(){

    float a,b ;                    // float is a data type which accepts numbers with decimals.
    printf("Enter the magnitude of The first Vector:");
    scanf("%f",&a);
    printf("Enter the magnitude of The Second Vector:");
    scanf("%f",&b);

    float product = a*b ;                   // we need to specify what data type the product is going to be as well
    
    printf("The Dot product of the Two vectors is %.2f\n",product); //Here, %.2f is a format specifier that will enable me to only see the product rounded off to 2 decimals
};