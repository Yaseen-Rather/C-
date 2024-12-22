#include<stdio.h>
#include<string.h>

int main(){
    
    char str[50];
    int a = 0, b= 0, c= 0;

    printf("Enter String : ");
    gets(str);

    int d = strlen(str);

    for (int i = 0; i < d; i++)
    {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
        {
            a++;
        }
        else if (str[i] >= 0 && str[i] <= 47 || str[i] >= 58 && str[i] <= 64 || str[i]>= 91 && str[i] <= 96 || str[i] >= 123 && str[i] >= 127)
        {
            b++;
        }
        else{
            c++;
        }
    }
    
    printf("No of Alphabets : %d\nNo of Digits : %d\nNo of special character : %d", a,b,c);

    return 0;
}