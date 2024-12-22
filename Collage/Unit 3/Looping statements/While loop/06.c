//find weather number is prime or not

#include<stdio.h>

int main(){
    
    int a, b = 2, i = 0;

    printf("Enter Number - ");
    scanf("%d", &a);

    while (b<=a/2)
    {
        if (a%b==0)
        {
            i++;
        }
        
        b++;
    }
        if (i == 0)
        {
            printf("%d is a prime number", a);
        }

        else{
            printf("%d is a composite number", a);
        }
        
    return 0;
}