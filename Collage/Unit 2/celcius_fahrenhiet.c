// F to C

#include<stdio.h>

int main(){
    
    float F, C;

    printf("Enter temperature in Fahrenhiet - ");
    scanf("%f", &F);
    
    C = 0.55*(F - 32);

    printf("The temperature in Celcius is %.2f", C);
    
    return 0;
}