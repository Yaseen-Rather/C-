#include<stdio.h>

int main(){
    
    int a, b;

    printf("Enter two numbers - ");
    scanf("%d %d",&a, &b);

    if (a>b)    
    {
        printf("A is larger i.e %d", a);
    }

    else{
        printf("B is larger i.e %d", b);
    }
    
    return 0;
}