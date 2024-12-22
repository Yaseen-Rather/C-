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

    p = realloc(p, 2*sizeof(int));

    printf("Enter New value : ");
    scanf("%d", p+n);

    sum += *(p + n);

    printf("Enter new value : ");
    scanf("%d", p + n + 1);

    sum += *( p + n + 1);

    printf("Sum : %d", sum);

    free(p);

    return 0;
}