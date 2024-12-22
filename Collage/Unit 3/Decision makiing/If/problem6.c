#include<stdio.h>

int main(){
    
    char x;

    printf("Enter - ");
    scanf("%c", &x);

    if ((x>=32 && x<=47) || (x>=58  && x<=64)  || (x>=91  && x<= 96)  || (x>= 123 &&  x<= 127))
    {
        printf("It is a symbol");
    }
    else if (x>=48 && x<= 57)
    {
        printf("It is a digit");
    }
    else if (x>=65 && x<= 90)
    {
        printf("It is an alphabet and is Uppercase");
    }
    else if(x>=97 && x<=122)
    {
        printf("It is a alphabet and is lower case");
    }
    
    return 0;
}