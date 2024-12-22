#include<stdio.h>

int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

int sum(int a, int b){
    return a + b;
}

int sub(int a, int b){
    return a - b;
}

int mul(int a, int b){
    return a * b;
}

int div(int a, int b){
    
    if (b == 0)
    {
        printf("Division by zero not possible!!!");
        return 0;
    }
    
    return a/b;
}

int main(){
    
    int a, b;

    printf("Enter Two numbers : ");
    scanf("%d %d", &a, &b);

    int c;

    printf("1 : Sum\n2 : Subtraction\n3 : Multiplication\n4 : Division\n");

    printf("Enter Operation : ");
    scanf("%d", &c);

    switch (c)
    {
    case (1):
        printf("Sum : %d", sum(a,b));
        break;

    case (2):
        printf("Subtraction : %d", sub(a,b));
        break;

    case (3):
        printf("Multplication : %d", mul(a,b));
        break;

    case (4):
        printf("Division : %d", div(a, b));
    default:
        printf("Invalid Operation!!!!");
        break;
    }

    return 0;
}