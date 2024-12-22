#include<stdio.h>
#include<string.h>

int main(){
    
    char str[50];
    int c = 0, b = 0;

    printf("Enter String : ");
    gets(str);

    int a = strlen(str);

    for (int i = 0; i < a; i++)
    {
        if(str[i] == 65 || str[i] == 69 || str[i] == 73 || str[i] == 79 || str[i] == 89 || str[i] == 97 || str[i] == 101 || str[i] == 105 || str[i] == 111 || str[i] == 117)
            c++;

        else
            b++;
    }

    printf("Vowel : %d\nConconants : %d", a, b);
    

    return 0;
}