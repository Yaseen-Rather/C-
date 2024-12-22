#include<stdio.h>

int sum(int, int, int);

int sum(int a, int b, int c){

    return a + b + c;
}

int main(){

    int a, b, c, s;

    printf("Enter two numbers : ");
    scanf("%d %d %d", &a, &b, &c);

    s = sum(a,b,c);

    printf("Sum : %d", s);

    return 0;
}