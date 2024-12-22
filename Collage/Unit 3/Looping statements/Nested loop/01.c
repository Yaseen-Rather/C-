#include<stdio.h>

int main(){
    
    int a;

    printf("Enter N - ");
    scanf("%d", &a);

    for (int i = 1; i <=a; i++)
    {
        int f = 1;
        for (int y = i; y >=1; y--)
        {
            f= f * y;
        }
        printf("The factoria of %d is %d\n", i, f);
    }

    return 0;
}