#include<stdio.h>

int main(){
    
    int a, b, c, d;

    printf("Enter princile, interest and time - ");
    scanf("%d %d %d", &a, &b, &c);

    d = (a * b * c) * .001;

    printf("Simple Interest is %d", d);


    return 0;
}