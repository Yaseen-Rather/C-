#include<stdio.h>
#include<string.h>

int main(){
    
    char str[50];

    printf("Enter string : ");
    gets(str);

    int len = strlen(str);

    printf("%d", len);

    return 0;
}