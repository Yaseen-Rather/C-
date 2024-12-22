#include<stdio.h>

int main(){

    int a, b, c, d, e, Total;
    float percentage;

    printf("The values of a, b, c, d, e are- ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    Total= a+b+c+d+e;

    printf("Total marks are %d", Total);
    
    percentage= Total*0.2;

    printf("\nThe Percentage is %f", percentage);
    return 0;
}