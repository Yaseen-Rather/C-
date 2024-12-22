//sum of even numbers

#include<stdio.h>

int main(){
    
    int a, sum = 0;

    printf("Enter number - ");
    scanf("%d", &a);

    while (a != 0)
    {
        if((a%10)%2==0)
            sum = sum + a%10;

        a = a/10;
    }
    printf("%d", sum);

    return 0;
}