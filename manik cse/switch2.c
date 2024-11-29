#include<stdio.h>
#include<stdlib.h>
int main(){
    int choice;
    float area, radius, side, length , breadth;
    printf("1. area of circle\n");
    printf("2. area of rectangle\n");
    printf("3. area of square\n");
    printf("enter your choice:");
    scanf("%f",&choice);
    switch(choice){
        case1:
        
        printf("enter the  radius");
        scanf("%f",&radius);
        area = 3.141*radius*radius;
        printf("area of circle=%f",area);
        break;

        case2:
        
        printf("enter  length and breadth");
        scanf("%f%f",&length,&breadth);
        area = length * breadth ;
        printf("area of rectangle=%f",area);
        break;
        case3:
        
        printf("enter the side");
        scanf("%f",&side);
        area = side * side ;
        printf("area of square=%f",area);
        break;
        default:
        printf("invalid choice");
    }
    return 0;
}