#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    
    char pan[100];
    char pad[100];
    
    gets(pan);
    
    strcpy(pad, pan);
    
    int a = strlen(pan);
    
    for(int i = a; i >= 0; i--){
        
        for(int j = 0; j < a-1; j++){
        
        pad[j] = pan[i];
        }
    }
    
    
    if(strcmp(pan, pad) == 0)
        printf("Palindrome");
    else
        printf("Not Palindrome");
        
    return 0;
}