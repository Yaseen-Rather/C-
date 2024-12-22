//wap for sum

#include<stdio.h>

int main(){
    
    int a, b;

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

    int sum = 0;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            sum = sum + arr[i][j];
        }
        
    }

    printf("The sum is %d", sum);
    
    return 0;
}