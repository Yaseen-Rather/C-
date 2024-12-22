#include<stdio.h>

int main(){
    
    int a, b, c;

    printf("Enter three numbers - ");
    scanf("%d %d %d", &a, &b, &c);

    switch (a>b && a>c)
    {
    case 1:
        printf("%d is larger i.e A", a);
        break;
    case 0 :
        switch (b>c)
        {
        case 1:
            printf("%d is larger i.e B", b);
            break;
        
        case 0:
            printf("%d is larger i.e C", c);
        }
    }
    return 0;
}