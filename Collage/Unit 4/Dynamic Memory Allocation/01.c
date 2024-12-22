#include<stdio.h>
#include<stdlib.h>

int main(){
    
    int n, sum = 0;

    printf("Enter Number :");
    scanf("%d", &n);

    printf("Enter %d numbers : ", n);

    for (int i = 0; i < n; i++)
    {
        int* p = (int*)malloc(sizeof(int));
        scanf("%d", p);

        sum += *p;
        free(p);
    }

    printf("Sum : %d", sum);
    

    return 0;
}