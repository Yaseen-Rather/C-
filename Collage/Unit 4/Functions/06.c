#include<stdio.h>
int fac(int);

int fac(int a){
    if(a == 0 || a == 1){
        return 1;
    }
    return a * fac(a-1);
}


int main(){
    
    int a;

    printf("Enter Number : ");
    scanf("%d", &a);

    printf("Factorial : %d", fac(a));

    return 0;
}