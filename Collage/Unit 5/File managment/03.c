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

    char str[100];
    fgets(str, 100, ptr);

    while (!feof(ptr))
    {
        fgets(str, 100, ptr);
        printf("%s", str);  
    }
    
    fclose(ptr);

    return 0;
}