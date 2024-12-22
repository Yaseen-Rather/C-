#include<stdio.h>

int main(){
    
    FILE *ptr;

    ptr = fopen("yas.txt", "r");

    int num;

    fscanf(ptr, "%d", &num);

    printf("%d", num);

    return 0;
}