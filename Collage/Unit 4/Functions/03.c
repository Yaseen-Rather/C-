#include<stdio.h>
float area(float);

float area(float a){

    printf("%f", a);
}

int main(){
    
    int a,b,c;
    float si;

    printf("Enter Principle, time and rate ");
    scanf("%d %d %d", &a, &b, &c);

    si = (a * b * c)/ 100;

    area(si);

    return 0;
}