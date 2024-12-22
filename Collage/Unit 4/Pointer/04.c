#include<stdio.h>

void rev(int* arr, int);

void rev(int* arr, int a){

    for (int i = a - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    
}

int main(){
    
    int a;

    printf("Enter Array size : ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    rev(arr, a);
    
    return 0;
}