#include <stdio.h>

int main()
{

    int a, b, c, d;

    printf("Enter Array 1 : ");
    scanf("%d %d", &a, &b);

    printf("Enter Array 2 : ");
    scanf("%d %d", &c, &d);

    int arr[a][b];
    int mul[c][d];
    int sol[a][d];

    if (b != c)
    {
        printf("Multiplication not possible");
        
        return 0;
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            printf("Enter array 1 : ");
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < c; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("Enter Array 2 : ");
            scanf("%d", &mul[i][j]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            sol[i][j] = 0;
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            for (int k = 0; k < b; k++)
            {
                sol[i][j] += arr[i][k] * mul[k][j];
            }
        }
    }

    printf("Resultant matrix:\n");
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < d; j++)
        {
            printf("%d ", sol[i][j]);
        }
        printf("\n");
    }

    return 0;
}