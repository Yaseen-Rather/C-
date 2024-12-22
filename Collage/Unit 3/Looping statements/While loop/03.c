//sum of 1st and last digit

#include<stdio.h>

int main(){
    
    int a, b, c, sum = 0;

    printf("Enter Number - ");
    scanf("%d", &a);

    b = a%10;

    while (a !=0)
    {
        c = a%10;
        a = a/10;
    }
    sum = b + c;

    printf("%d", sum);
    
    return 0;
}