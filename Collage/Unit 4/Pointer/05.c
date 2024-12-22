#include <stdio.h>

void search(int *arr, int, int);

void search(int *arr, int a, int b)
{

    for (int i = 0; i < a; i++)
    {

        if (arr[i] == b)
        {
            arr[i] = 0;
        }
    }

    printf("After deletition array is : ");

    for (int i = 0; i < a; i++)
    {
        printf("%d\t", arr[i]);
    }
}

int main()
{

    int a, b;

    printf("Enter size of array : ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Element you want to delete : ");
    scanf("%d", &b);

    search(arr, a, b);

    return 0;
}