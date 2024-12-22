#include<stdio.h>

int main(){
    
    int a, f = 1, i;

    printf("Enter Number - ");
    scanf("%d", &a);

    for (i = 1; i<=a; i++)
    {
        f*=i;
       
    }
    printf("%d", f);
    return 0;
}