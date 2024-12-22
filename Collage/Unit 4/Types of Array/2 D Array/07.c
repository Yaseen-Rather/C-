// sum of rows and column elements.

#include <stdio.h>

int main()
{
    int a, b, i, j;

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

    for (int i = 0; i < a; i++)
    {
        int sum  = 0;

        for (int j = 0; j < b; j++)
        {
            sum = sum + arr[i][j]; 
        }
        
        printf("Sum of row %d is : %d\n", i, sum);
    }

    for (int j = 0; j < b; j++)
    {
        int sum  = 0;

        for (i = 0; i < a; i++)
        {
            sum = sum + arr[i][j];
        }
        
        printf("Sum of column %d is : %d \n", j, sum);
    }

    return 0;
}
    
    