#include <stdio.h>
#include <math.h>

int main()
{
    int num, sum=0;
    printf("Enter Number: ");
    scanf("%d", &num);
    
    int temp = num;
    int digits = (int)log10(num) + 1;
    
    while(num != 0)
    {
        int rem = num % 10;
        sum += (int)pow(rem, digits);
        num /= 10;
    }
    
    if(temp == sum)
        printf("Number is Armstrong\n");
    else
        printf("Number is not Armstrong\n");
        
    return 0;
}
