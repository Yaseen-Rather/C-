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

    int b = 0, c = 0;

    for (int i = 0; i < a; i++)
    {
        
        if (arr[i]%2==0)
        {
            c++;
        }
        else{
            b++;
        }
        
    }

    printf("Even = %d, Odd = %d", c,b);

    return 0;
}