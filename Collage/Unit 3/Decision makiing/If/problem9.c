#include<stdio.h>

int main(){
    
    int a, b, c, d, e, total, p;

    printf("Enter marks obtained\n");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    total = a + b + c + d + e;
    p = total * 0.2;

    if (p>=90)
    {
        printf("Your grade is A+ and your percentage is %d", p);
    }
    else if (p<90 && p>=80)
    {
        printf("Your grade is A and your percentage is %d", p);
    }
    else if (p<80 && p>=70)
    {
        printf("Your grade is B+ and your percentage is %d", p);
    }
    else if (p<70 && p>60)
    {
        printf("Your grade is B and your percentage is %d", p);
    }
    else if (p<60 && p>=50)
    {
        printf("Your grade is C and your percentage is %d", p);
    }
    else
    {
        printf("You Failed and your percentage is %d", p);
    }
    
    return 0;
}