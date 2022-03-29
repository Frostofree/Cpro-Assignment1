#include <stdio.h>

void main()
{

    int a, i;

    printf("Enter an Integer whose Multipication table you want :");

    scanf("%d", &a);

    i = 1;
begin:

    if (i <= 10)
    {

        int product = a * i;

        printf("%d X %d = %d\n", a, i, product);

        i = i + 1;
    }

    else
        goto end;

    goto begin;

end:

    printf("The table is complete\n");
};