#include<stdio.h>

int main(){
    
    int no[5];

    int* k = &no[1];
    int* g = &no[2];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &no[i]);
    }

    printf("%p %p", k, g);
    
    return 0;
}