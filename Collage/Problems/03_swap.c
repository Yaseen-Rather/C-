#include<stdio.h>

int main(){

    int a, b, c;

    printf("put the value of a- ");
    scanf("%d", &a);

    printf("put the value of b- ");
    scanf("%d", &b);

    a= a + b;
    b= a - b;
    a= a - b;

    printf(" the value of a and b are- %d, %d", a, b);
    return 0;
}