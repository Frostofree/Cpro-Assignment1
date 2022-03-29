#include <stdio.h>

void main()
{

    int a, b, c, A, B, C;
    printf("Enter the 1st Number:");
    scanf("%d", &a);
    printf("Enter the 2nd Number:");
    scanf("%d", &b);
    printf("Enter the 3rd Number:");
    scanf("%d", &c);

    if (a > b)
    {
        if (b > c)
        {
            A = a, B = b, C = c;
        }
        else
        {
            if (a > c)
            {
                A = a, B = c, C = b;
            }
            else
            {
                A = c, B = a, C = b;
            }
        }
    }
    else
    {
        if (b < c)
        {

            A = c, B = b, C = a;
        }
        else
        {
            if (a > c)
            {
                A = b, B = a, C = c;
            }
            else
            {
                A = b, B = c, C = a;
            }
        }
    }

    if (A * A == B * B + C * C)
    {
        printf("The Three Numbers form a Pythagorean Triplet");
    }
    else
    {
        printf("The Three Numbers do not form a Pythagorean Triplet");
    }
}