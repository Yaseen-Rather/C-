#include<stdio.h>
#include<stdlib.h>

int main(){

    int a;
    system("cls");

    printf("Enter N - ");
    scanf("%d", &a);

    for(int i = 1; i<=a; i++)
    {
        if (i%2==0)
        {
            printf("%d ", i);
        }  
    }

    return 0;
}