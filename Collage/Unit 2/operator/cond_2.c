#include<stdio.h>

int main(){
    
    int a, b, c;

    printf("Enter value of a and b -\n ");
    scanf("%d %d", &a, &b);

    c = (a>b) ? a : b;

    printf("The larger number is %d", c);

    return 0;
}