//copy from one array to another.

#include<stdio.h>

int main(){
    
    int a;

    printf("Enter array size - ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        printf("Enter Number - ");
        scanf("%d", &arr[i]);
    }

    int b;
    b = a;

    int arrb[b];

    for (int i = 0; i < b; i++)
    { 
        arrb[i] = arr[i];      
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d ", arrb[i]);
    }

    return 0;
}