#include<stdio.h>

int main(){
    
    int a, b, c, d, e;
    float Average;

    printf("Enter any 5 numbers - \n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    Average = (a + b + c + d + e) * 0.2;

    printf("The average is - %f", Average);

    return 0;
}