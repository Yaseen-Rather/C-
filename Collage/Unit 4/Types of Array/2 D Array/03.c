//wap for diagonal

#include <stdio.h>

int main()
{

    int a, b, sum;

    printf("Enter rows and column - ");
    scanf("%d %d", &a, &b);

    int arr[a][b];

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int sum1 = 0;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == j)
            {
                sum1 = sum1 + arr[i][j];
            }
        }
    }

    int sum2 = 0;
    int j = b - 1;

    for (int i = 0; i < a; i++)
    {
        if (j >= 0)
        {
            sum2 = sum2 + arr[i][j];
        } 
        j--;
    }

    sum = sum1 + sum2;
    
    printf("sum of diagonal elements is %d", sum);

    return 0;
}