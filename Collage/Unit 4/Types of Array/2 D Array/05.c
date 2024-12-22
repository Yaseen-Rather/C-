// multplication of 2 matrix

#include <stdio.h>

int main()
{

    int a, b;

    printf("Enter rows and column of both matrix - ");
    scanf("%d %d", &a, &b);

    int arr[a][b];
    int mat[a][b];

    printf("Enter elements for matrix 1");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("Enter elements for matrix 2");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    int multiply = 1;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            multiply = multiply * arr[i][j] * mat[i][j];
        }
    }

    printf("%d", multiply);

    return 0;
}