#include<stdio.h>

int main(){
    
    int a;

    printf("Enter the value of a - ");
    scanf("%d", &a);

    (a%2==0) ? printf("the number is even") : printf("The number is odd");


    return 0;
}