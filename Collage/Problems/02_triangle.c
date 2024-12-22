#include<stdio.h>

int main(){
    int Base, Height;
    float Area;

    printf("The Base of triangle is- ");
    scanf("%d", &Base);

    printf("The height of triangle is- ");
    scanf("%d", &Height);

    Area = Base*Height*0.5;

    printf("The area of triangle is %f\n", Area);
    return 0;
}