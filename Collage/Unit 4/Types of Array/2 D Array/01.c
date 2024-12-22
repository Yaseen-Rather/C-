#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter Row and Column size - ");
    scanf("%d %d", &a, &b);

    int arr[a][b];

    printf("Enter data - ");

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            int* g = &arr[i][j];
            printf("%d", *g);
        }
        printf("\n");
    }

    return 0;
}