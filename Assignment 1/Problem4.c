#include <stdio.h>

void main()
{

    int a, b, i, hcf;

    printf("Enter the 1st number:");
    scanf("%d", &a);
    printf("Enter The 2nd Number:");
    scanf("%d", &b);

    for (i = 1; i <= a; i++)
    {

        if (a % i == 0 && b % i == 0 && i <= b)
        {
            hcf = i;
        }
    }
    if (hcf == 1)
    {
        printf("They are Co Prime\n");
    }
    else
    {
        printf("They are not Co-prime, and their HCF is %d\n", hcf);
    }
}