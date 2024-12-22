#include<stdio.h>

int main(){
    
    int a, num, max = 0;

    printf("Enter Number - ");
    scanf("%d", &a);

    for(int i = 1; i<=a; i++){
        printf("Enter number - ");
        scanf("%d", &num);
            if (num>max)
            {
                max = num;
            }

    }
    printf("Max = %d", max);
    

    return 0;
}