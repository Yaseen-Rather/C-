#include<stdio.h>
#include<string.h>

int main(){
    
    char str[50];
    char s[50];

    printf("Enter String 1 : ");
    gets(str);

    printf("Enter String 2 : ");
    gets(s);

    strcat(str, s);

    printf("%s", str);

    return 0;
}