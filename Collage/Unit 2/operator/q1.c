// write a program to find greatest aming 3


#include<stdio.h>

int main(){

    int a, b, c, d;

    printf("Enter the value of a b and c -\n");
    scanf("%d %d %d", &a, &b, &c);


    d = (a>b && a>c) ? a: (b>c) ? b : c;

    printf("The larger number is - %d", d);


    return 0;
}