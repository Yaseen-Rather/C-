#include<stdio.h>
#include<string.h>

int main(){
    
    char str[50];
    char s[50];

    printf("Enter String : ");
    gets(str);

    printf("Enter String : ");
    gets(s);

    int a = strcmp(str, s);

    if (a == 0)
    {
        printf("Both are same");
    }
    else if (a == -1)
    {
        printf("1nd is bigger than 2st");
    }
    else{
        printf("2nd is bigger than 1st");
    }
    
    return 0;
}