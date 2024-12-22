#include<stdio.h>

int main(){
    
    int a;

    printf("Enter array size - ");
    scanf("%d", &a);

    int arr[a];

    for (int i = 0; i < a; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < a; i++)
    {
        int flag = 0;
            for (int k = 0; k < i; k++)
            {
                if (arr[i]==arr[k])
                {
                    flag = 1;\
                    break;
                }
                
            }
        
        if (flag == 0)
        {
            int frq = 0;
                for (int j = i; j < a; i++)
                {
                    if (arr[i] == arr[j])
                    {
                        frq++;
                    }
                    
                    printf("%d occurs %d time\n", arr[i], frq);
                }
                
        }
        
    }
    
    return 0;
}