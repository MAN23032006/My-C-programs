#include<stdio.h>
#include<math.h>
int main(){
    float x1, x2, y1 , y2, distance;
    printf("enter x-coordinate of the first point :");
    scanf("%f",&x1);
    printf("enter y-coordinate of the second point ");
    scanf("%f",&y1);
    printf("enter x-coordinate of the second point");
    scanf("%f", &x2);
    printf("enter y-coordinate of the second point");
    
    scanf("%f", &y2);
    
    distance= sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1))
    printf("the euclidean distanceis:%2f/n",distance);
    return 0;
}


