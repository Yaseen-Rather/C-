#include<stdio.h>

int main(){
    
    int a;

    printf("Enter N - ");
    scanf("%d", &a);

    for (int i = 1; i <=a; i++)
    {
        printf("%d ", i*i);
    }
    

    return 0;
}