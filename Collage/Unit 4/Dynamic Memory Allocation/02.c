#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n, sum = 0;

    printf("Enter Number :");
    scanf("%d", &n);

    printf("Enter %d numbers : ", n);

    int* p = (int*) calloc(n, sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", (p + i));
        
        sum += *(p + i);
    }

    free(p);

    printf("Sum : %d", sum);

    return 0;
}