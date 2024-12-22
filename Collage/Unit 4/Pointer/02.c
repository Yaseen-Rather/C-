#include<stdio.h>

int main(){
    
    int a , b;
    int* ptr = &a;
    int* prt = &b;

    printf("Enter Two numbers : ");
    scanf("%d %d", ptr, prt);

    int sum = *ptr + *prt;

    printf("Sum : %d", sum);

    return 0;
}