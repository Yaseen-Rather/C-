//transpose.

#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter rows and column of matrix - ");
    scanf("%d %d", &a, &b);

    int arr[a][b];

    printf("Enter elements for matrix 1 ");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("The transpose is : ");

    for (int j = 0; j < b; j++)
    {
        for (int i = 0; i < a; i++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}