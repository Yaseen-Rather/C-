#include <stdio.h>

int sum(int);

int sum(int a)
{
    if (a == 0)
    {
        return 0;
    }
    else
        return a % 10 + sum(a / 10);
}

int main()
{

    int a;

    printf("Enter Number : ");
    scanf("%d", &a);

    printf("Sum : %d", sum(a));

    return 0;
}