//wap to print number from 1 to n

#include<stdio.h>

int main(){
    
    int n;

    printf("Enter N - ");
    scanf("%d", &n);

    for (int i = 1; i <=n; i++)
    {
        printf("%d ", i);
    }
    
    return 0;
}