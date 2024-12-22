#include<stdio.h>

int main(){
    
    int a;

    printf("Enter number - ");
    scanf("%d", &a);

    if (a>=0 && a<10)
    {
        printf("%d is single digit", a);
    }
    else if (a>=10 && a<100)
    {
        printf("%d is double digit", a);
    }
    else if (a>=100 && a<1000)
    {
        printf("%d is triple digit", a);
    }
    else
    {
        printf("%d has more than 3 digits", a);
    }

    return 0;
}