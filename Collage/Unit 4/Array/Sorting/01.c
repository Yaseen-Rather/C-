#include<stdio.h>

int main(){
    int a;

    printf("Enter Array size - ");
    scanf("%d", &a);
    
    int arr[a];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number - ");
        scanf("%d", &arr[i]);
    }

    for (int i = 1; i < a; i++)
    {
        int val = arr[i];
        int j = i - 1;
            while (j>=0 && arr[j]>val)
            {
                arr[j+1] = arr[j];
                j--;
            }

                if (i != (j+1))
                {
                    arr[j+1] = val;
                }
                
    }
    printf("The Sorted array is - ");
        for (int i = 0; i < a; i++)
        {
            printf("%d ", arr[i]);
        }
        

    return 0;
}