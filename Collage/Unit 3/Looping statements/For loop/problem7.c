#include<stdio.h>

int main(){
    
    int a = 0, b = 1, c, d;

    printf("Enter number - ");
    scanf("%d", &d);

    printf("%d %d ", a, b);

    for (  int i = 3; i <= d; i++)
    {
        c = a+b;
        a=b;
        b=c;
        printf("%d ", c);

    }
    

    return 0;
}