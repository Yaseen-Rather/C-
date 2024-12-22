#include<stdio.h>

int main(){
    
     char x;

    printf("Enter Alphabet - ");
    scanf("%c", &x);

    if (x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U' )
    {
        printf("%c is a vowel and is Uppercase", x);
    }
    else if ( x == 'a' || x == 'e' || x == 'i' || x == 'o' || x== 'u')
    {
        printf("%c is a vowel and is lowercase", x);
    }
    else
    {
        printf("%c is a consonant", x);
    }   
    return 0;
}