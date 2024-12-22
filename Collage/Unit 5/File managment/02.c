//WAP to read all data from the file character by character;

#include<stdio.h>
#include<stdlib.h>

int main(){
    
    FILE *ptr;

    ptr = fopen("data.txt", "r");

    if (ptr == NULL)
    {
        printf("File not found !!!!");
        exit(0);
    }

    char ch;

    while (ch != EOF)
    {
        ch = fgetc(ptr);
        printf("%c", ch);   
    }
    
    fclose(ptr);

    return 0;
}