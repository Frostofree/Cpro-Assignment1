#include <stdio.h>

int main()
{

    int a, b, c = 5, N;

    printf("ENter the Number of pythagorean Triplets you want:");
    scanf("%d", &N);

    int count = 0;

    while (count < N)
    {
        for (a = 1; a <= c; a++)
        {

            for (b = 1; b <= c; b++)
            {

                if (a * a + b * b == c * c && a < b)
                {

                    printf("(%d,%d,%d)\n", a, b, c);
                    count++;

                   
                }
            }
        }

        c = c + 1 ;
    }

    return 0 ; 
}
