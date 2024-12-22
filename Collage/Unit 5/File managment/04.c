#include<stdio.h>
#include<stdlib.h>

int main(){
    
    FILE *ptr;

    ptr = fopen("data.txt", "a");

    if (ptr == NULL)
    {
        printf("File not found !!!!");
        exit(0);
    }

    char ch;

    printf("Enter Character : ");
    scanf("%c", &ch);

    fputc(ch, ptr);
    printf("Character write in file successfully");
    
    fclose(ptr);

    return 0;
}