//reverse elements of Array.

#include<stdio.h>

int main(){
    
    int a, b;

    printf("Enter array size - ");
    scanf("%d", &a);

    int arr[a];

    for ( int i = 0; i < a; i++)
    {
        printf("Enter Number - ");
        scanf("%d", &arr[i]);
    }

    for (int i = (a - 1); i > 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
    return 0;
}