#include<stdio.h>

void search(int* arr , int, int);

void search(int* arr, int a, int b){

        for (int i = 0; i < a; i++)
        {
            
            if (arr[i] == b)
            {
                printf("The element %d is at index %d", b, i);
            }
        }
}

int main(){
    
    int a, b;

    printf("Enter size of array : ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Element you want to find : ");
    scanf("%d", &b);
    
    search ( arr , a, b);

    return 0;
}