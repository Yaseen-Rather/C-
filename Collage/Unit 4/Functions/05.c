#include<stdio.h>

int cube1(int);// argument, return value

int cube1(int a){

    return a*a*a;
}

void cube2();//no argument no retrun value

void cube2(){
    int a;
    printf("Enter Number : ");
    scanf("%d", &a);

    printf("Cube : %d\n", a*a*a);
}

int cube3();// no argument,return value

int cube3(){
    int a;
    printf("Enter Number : ");
    scanf("%d", &a);

    return a*a*a;
}

void cube4(int);// return type

void cube4(int a){

    printf("Cube : %d ", a*a*a);
}

int main(){
    
    int a, c1, c2, c3, c4;

    printf("Enter number : ");
    scanf("%d", &a);

    c1 = cube1(a);// cube1

    printf("%d\n", c1);

    cube2();

    c3 = cube3();

    printf("%d\n", c3);

    cube4(a);

    return 0;
}