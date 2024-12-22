// Homework

#include<stdio.h>

int main(){
    
    int a, b, peri, s1, s2, s3;
    float area;

    printf("Enter base and height of triangle - ");
    scanf("%d %d", &a, &b);

    area = a*b*0.5;

    printf("The area of triangle with base %d and height %d is - %.1f", a, b, area);

    printf("\nEnter the value of sides of triangle- ");
    scanf("%d %d %d", &s1, &s2, &s3);

    peri = s1 + s2 + s3;

    printf("\nThe Perimeter of triangle is %d", peri);

    return 0;
}