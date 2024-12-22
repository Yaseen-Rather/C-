#include<stdio.h>
#include<string.h>

int main(){
    
    char str[50], str2[50];

    printf("Enter String : ");
    gets(str);

    strcpy(str2, str);
    strrev(str2);

    if (strcmp(str, str2) == 0)
        printf("String is palindrome");
    
    else
        printf("The String is not palindrome");
    

    return 0;
}