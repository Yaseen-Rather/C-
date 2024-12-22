#include <stdio.h>

int main() {
    
    int a, b, sub;

    printf("Enter the values of a and b- \n");
    scanf("%d %d", &a, &b);

    sub = a - b;

    printf("The answer is- %d", sub);

    return 0;
}