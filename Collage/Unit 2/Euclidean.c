#include<stdio.h>
#include<math.h>


int main(){
    
    float x1, x2, y1, y2, distance;

    printf("The the values of x1, y1, x2, y2 ");
    scanf("%f %f %f %f", &x1, &y1, &x2, &y2);


    distance = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));

    printf("The Euclidean distance is %.2f", distance);
    
    return 0; 
}