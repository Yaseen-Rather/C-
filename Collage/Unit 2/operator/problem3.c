#include<stdio.h>

int main(){

    int a;
    
    printf("Enter the number - ");
    scanf("%d", &a);

    a = a*a*a;

    printf("%d", a);

    return 0;
}