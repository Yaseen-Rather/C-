//sum of elements of array.

#include<stdio.h>

int main(){
    
    int a, sum = 0;

    printf("Enter Size of array - ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter Number - ");
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        sum = (sum) + arr[i];
    }

    printf("%d", sum);

    return 0;
}