#include<stdio.h>

int main(){
    
    int arr[5] = {60, 7, 6, 5, 3};

    int* ptr = arr;

    printf("%d", *(ptr + 3));

    return 0;
}