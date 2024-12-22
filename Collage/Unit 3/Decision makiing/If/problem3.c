#include<stdio.h>

int main(){
    
    int a;
    float da, hra;

    printf("Enter basic salary - ");
    scanf("%d", &a);

    if (a < 2000)
    {
        da = a * 0.1;
        hra = a * 0.15;

    }
    else if (a >= 2000 && a<5000)
    {
        da = a * 0.15;
        hra = a * 0.2;

    }
    else if (a >= 5000 && a<8000)
    {
        da = a * 0.25;
        hra = a * 0.3;

    }
    else if (a >=8000 && a<10000)
    {
        da = a * 0.3;
        hra = a * 0.35;

    }
    else
    {
        da = a * 0.4;
        hra = a * 0.45;

    }

    printf("Your gross salary is %.2f", a + da + hra); 
      
    return 0;
}