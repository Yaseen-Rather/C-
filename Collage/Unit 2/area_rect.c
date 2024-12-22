#include <stdio.h>

int main() {
    
    int l, b, area, peri;

    printf("Enter length and Breath - ");
    scanf("%d %d", &l, &b);

    area = l*b;

    peri = (l + b)*2;

    printf("The Area and Perimeter of rectangle with length %d and breath %d is - %d, %d", l, b, area, peri);
    
    return 0;
}