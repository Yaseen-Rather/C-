//voting

#include<stdio.h>

int main(){
    
    int x;

    printf("Enter your age : ");
    scanf("%d", &x);

    if (x>=18)
    {
        printf("You are eligible for voting");
    }
    else
    {
        printf("You are not eligible for voting");
    }
    
    return 0;
}