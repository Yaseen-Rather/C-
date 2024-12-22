#include<stdio.h>

int main(){
    
    int n, Sum;

    printf("Enter the value of N - ");
    scanf("%d", &n);

    Sum = (n*(n+1))/2;

    printf("The Sum is - %d", Sum);

    return 0;
}