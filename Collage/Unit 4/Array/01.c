#include<stdio.h>

int main(){
    
    int marks[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter Number - ");
        scanf("%d", &marks[i]);
    }

    for (int i = 0; i < 5; i++)
    {
        printf("The number in index %d is - %d\n", i, marks[i]);
    } 

    return 0;
}