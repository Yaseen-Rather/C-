//2nd largest in an array.

#include<stdio.h>

int main(){
    
    int a;

    printf("Enter size of array - ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter Number - ");
        scanf("%d", &arr[i]);
    }

    int c = 0, d = 0;

    for (int i = 0; i < a; i++)
    {
        if (arr[i]>c)
        {
            d = c;
            c = arr[i];
        }
    }

    
    printf("2nd largest number in array = %d", d);

    return 0;
}