#include<stdio.h>

int main(){
    
    int a;

    printf("Enter Array size - ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}