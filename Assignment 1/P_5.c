#include <stdio.h>

int main()
{
    int N, sum = 0;
    printf("Enter The number of Components your vector has:");
    scanf("%d", &N);
    int Array[2][N];

    for (int i = 0; i < 2; i++)
    {

        for (int j = 0; j < N; j++)
        {
            scanf("%d", &Array[i][j]);
        }
    }

    for (int i = 0; i < 2; i++)
    {
        sum = sum + Array[0][i] * Array[1][i];
    }

    printf("The Dot Product is %d", sum);

    return 0;
}