#include<stdio.h>

int fac(int);

int fac(int a){
    if (a <=0)
    {
        return 1;
    }
    return fac(a - 1) * a;
}

int main(){
    
    int a;

    printf("Enter Number : ");
    scanf("%d", &a);

    printf("Factorial : %d", fac(a));

    return 0;
}