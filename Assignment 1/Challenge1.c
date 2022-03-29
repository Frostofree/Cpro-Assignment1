#include <stdio.h>

void main()
{

    int a, b, c, N;

    printf("Enter a Number N :");  //Takes Value OF N until which the pythagorean triplets are found
    scanf("%d", &N);

    for (a = 1; a <= N; a++)
    {

        for (b = 1; b <= N; b++)
        {

            for (c = 1; c <= N; c++)
            {

                if (a < b && a * a + b * b == c * c)
                {

                    printf("(%d,%d,%d)\n", a, b, c);
                }
            }
        }
    }
}