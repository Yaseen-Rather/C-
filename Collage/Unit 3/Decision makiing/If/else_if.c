#include<stdio.h>

int main(){
    
    int a;

    printf("Enter day number - ");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("Today is Monday");
    }
    else if (a == 2)
    {
        printf("Today is Tuesday");
    }
    else if (a == 3)
    {
        printf("Today is Wedenday");
    }
    else if(a == 4)
    {
        printf("Today is Thursday");
    }
    else if (a == 5)
    {
        printf("Today is Friday");
    }
    else if(a == 6)
    {
        printf("Today is Saturday");
    }
    else if (a == 7)
    {
        printf("Today is Sunday");
    }
    else
    {
        printf("Invalid day");
    }

    return 0;
}