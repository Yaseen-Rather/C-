#include<stdio.h>

int main(){
    
    int a, b;

    printf("Enter upper and lower limit - ");
    scanf("%d %d", &a, &b);

    for (int i = a; i <+b; i++)
    {
        int j = 2; int flag = 0;
        while (j<=(i/2))
        {
            if(i%j==0){
                flag = 1;
                break;
            }
            j++;
            
        }
        if(flag==0)
        printf("%d ", i);
    }
    
    return 0;
}