#include<stdio.h>
#include<string.h>

int main(){
    
    char str[50];
    char sr[50];

    printf("Enter String : ");
    gets(str);

    strcpy(sr, str);

    printf("%s", sr);

    return 0;
}