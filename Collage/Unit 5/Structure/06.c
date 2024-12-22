//Lab Experiment 12 A:

#include <stdio.h>
#include <stdlib.h>
int main() 
{
    char str[100];
    FILE *fp = fopen("data.txt","a+");
    printf("Enter text to write in file : ");
    gets(str);
    fputs(str, fp);
    rewind(fp);
    printf("File data is : \n");
    while(!feof(fp)){
        fgets(str, 50, fp);
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}