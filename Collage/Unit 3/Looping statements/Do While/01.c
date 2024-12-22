#include<stdio.h>

int main(){
    
    int num, sum = 0;

    do
    {
        printf("Enter Number - ");
        scanf("%d", &num);

        sum += num;

    } while (num != 0);

    
    printf("%d", sum);
    

    return 0;
}