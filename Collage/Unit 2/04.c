#include<stdio.h>

int main(){

    int a;
    float b;
    double c;
    char d;

    printf("Enter the value of a-\n");
    scanf("%d", &a);

    printf("Enter the value of b-\n");
    scanf("%f", &b);

    printf("Enter the value of c-\n");
    scanf("%lf", &c);

    printf("Enter the value of d-\n");
    scanf(" %c", &d);

    printf("The values entered by user is %d %f %lf %c", a, b, c, d);

    return 0;
}