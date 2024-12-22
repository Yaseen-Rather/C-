#include<stdio.h>

void mult(int, int);

void mult(int a, int i){


    if (i>10)
    {
        return;
    }
    

    printf(" %d X %d = %d", a, i, a * i);

    mult(a, i +1);
}

int main(){
    
    int a, i;

    printf("Enter Number : ");
    scanf("%d", &a);

    mult(a, i);

    return 0;
}