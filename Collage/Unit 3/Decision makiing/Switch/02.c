#include<stdio.h>

int main(){
    
    int r, l, b, s, a;
    float area;

    printf("i) Area of circle\nii) Area of rectangle\niii) Area of square\nEnter choise - ");
    scanf("%d", &a);


    switch (a)
    {
    case 1:
        printf("Enter radius - ");
        scanf("%d", &r);

        area = 3.14*r*r;

        printf("Area of circle is %.2f", area);
        break;

    case 2:
        printf("Enter length and breath - ");
        scanf("%d %d", &l, &b);

        area = l*b;

        printf("The area of rectangle is %.2f", area);
        break;

    case 3:
        printf("Enter Side - ");
        scanf("%d", &s);

        area = s*s;

        printf("The area of square is %.2f", area);
    
    default:
        printf("Invalid choise!!!");
        break;
    }
    return 0;
}