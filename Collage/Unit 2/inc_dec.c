#include<stdio.h>

int main(){
    
    float x = 7;

    ++x + ++x / ++x + x++; 

    printf("%f", x);
    
    return 0;
}