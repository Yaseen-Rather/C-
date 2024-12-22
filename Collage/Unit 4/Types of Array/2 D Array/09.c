// largest

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

    int max = arr[0][0];
    int min = arr[0][0];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (arr[i][j] > max)
            {
                max = arr[i][j];
            }

            if (arr[i][j] < min)
            {
                min = arr[i][j];
            }
        }
    }

    printf("Largest number is : %d\n", max);

    printf("Smallest Element is : %d\n", min);

    return 0;
}