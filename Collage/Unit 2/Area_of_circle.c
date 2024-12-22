#include <stdio.h>

int main() {
    
    const float pi = 3.141;
    
    int r; 
    float area, perimeter;

    printf("Enter radius - ");
    scanf("%d", &r);

    area = r * r * pi;

    perimeter = 2* pi *r;

    printf("The Area and Perimeter of circle with radius %d is - %.2f and %.2f", r, area, perimeter);

    return 0;
}