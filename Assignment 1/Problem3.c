#include <stdio.h>
#include <math.h>

void main()
{
    float i, N, a, sum;
    printf("Enter a number:");
    scanf("%f", &N);

    i = 1;
    sum = 0;
    while (i <= N)
    {

        a = sqrt(i);

        sum = sum + a;

        i = i + 1;
    }

    printf("%f\n", sum);
}