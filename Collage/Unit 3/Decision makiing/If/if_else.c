#include<stdio.h>

int main(){
    
    int x;

    printf("enter number - ");
    scanf("%d", &x);

    if(x>0)
    {
        printf("%d", x*x*x);
    }
    
    else
    {
        printf("%d", x*x);
    }

    return 0;
}