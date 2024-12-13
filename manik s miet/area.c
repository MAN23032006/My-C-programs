#include<stdio.h>
int main(){
    float radius,area,per,length,breadth,side;
    printf("enter radius");
    scanf("%f",&radius);
    area = 3.141*radius*radius;
    per = 2*3.14*radius;
    printf("area of circle=%f perimeter of circle =%f" , area, per);
    
    printf("enter the side of square");
    scanf("%f",&side);
    area = side * side;
    printf("area=%f\n", area);
    printf("enter  length and breadth");
    scanf("%f%f",&length,&breadth);
    area = length * breadth ;
    per= 2*(length + breadth);
    printf("area of rectangle=%f perimeter of rectangle =%f",area,per);
    
    return 0;

}





