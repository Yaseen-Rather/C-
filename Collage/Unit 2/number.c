#include<stdio.h>

int main(){
    
    int n, sum;
    int a, b, c, d, e;

    printf("Enter 5 digit number - ");
    scanf("%d", &n);
    
    e = n%10;
    n = n/10;
    d = n%10;
    n = n/10;
    c = n%10;
    n = n/10;
    b = n%10;
    n = n/10;
    a = n;

    printf("a = %d\nb = %d\nc = %d\nd = %d\ne = %d\n", a, b, c, d, e);

    sum = a + b + c + d + e;

    printf("Their sum is %d", sum);

    return 0;
}