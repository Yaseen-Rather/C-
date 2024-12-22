//largest in a array.

#include<stdio.h>

int main(){
    
    int a;

    printf("Enter array size - ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter number - ");
        scanf("%d", &arr[i]);
    }

    int c = 0;
    int d = 0;

    for (int i = 0; i < a; i++)
    {
        if (arr[i]>c)
        {
            c = arr[i];
            d = i;
        }
    }
    
    printf("The largest number in array is %d and its index is %d", c, d);
    
    return 0;
}