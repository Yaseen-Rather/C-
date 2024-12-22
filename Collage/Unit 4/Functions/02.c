#include<stdio.h>
void area();

void area(){

    int a;
    float area;

    printf("Enter Radius : ");
    scanf("%d", &a);

    area = 2 * 3.14 * a;

    printf("The area is %f", area);

}
int main(){
    
    area();
    
    return 0;
}