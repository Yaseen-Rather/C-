#include<stdio.h>

int main(){
    
    int a, b, sum, sub, mult, mod;

    printf("Enter value of a and b - ");
    scanf("%d %d", &a, &b);

    sum = a + b;
    sub = a - b;
    mult = a * b;
    mod = a % b;

    printf("The sum is %d\nThe difference is %d\nThe Product is %d\nThe remainder is %d", sum, sub, mult, mod);
    return 0;
}