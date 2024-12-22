#include<stdio.h>

int main(){
    
    int hours, min, sec, milisec;

    printf("Enter milliseconds - ");
    scanf("%d", &milisec);

    hours = milisec / 3600000;

    milisec = milisec % 3600000;

    min = milisec / 60000;

    milisec = milisec % 60000;

    sec = milisec / 1000;

    printf("The time is %d Hour %d minutes %d seconds. ", hours, min, sec);
    return 0;
}