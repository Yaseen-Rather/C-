#include<stdio.h>
#include<stdio.h>

int main(){
    
    char str[50];

    printf("Enter string - ");
    gets(str);

    strrev(str);

    printf("%s", str);

    return 0;
}