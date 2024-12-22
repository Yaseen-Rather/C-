#include<stdio.h>

int main(){
    
    int a, i, c;

    printf("Enter Number - ");
    scanf("%d", &a);

    for (i = 1; i<=10; i++)
    {
        c = a*i;
        printf(" %d x %d = %d\n", a, i, c);
    }
    

    return 0;
}