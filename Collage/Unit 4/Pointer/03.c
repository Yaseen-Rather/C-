#include<stdio.h>

int main(){
    
    int a, b, c;

    int* d = &a;
    int* e = &b;
    int* f = &c;

    printf("Enter Two number : ");
    scanf("%d %d", d, e);

    f = d;
    d = e;
    e = f;

    printf("Swaped !!! %d and %d", *d, *e);

    return 0;
}