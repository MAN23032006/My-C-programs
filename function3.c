//write a c program to find the cube of any number using function
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
void cube(int n)
    {
        printf("Cube of %d is %d",n,pow(n,3));
    }
    int main()
    {
        int num;
        printf("enter a number");
        scanf("%d",&num);
        cube(num);
        return 0;
    }
    //No argument but with return type
    int cube_return(int n)
    {
        return pow(n,3);
    }
    int main()
    {
        int num;
        printf("enter a number");
        scanf("%d",&num);
        printf("Cube of %d is %d",num,cube_return(num));
        return 0;
    }
    //argument but no return type
    void cube_3 (int a)
    {
        int cub = a*a*a;
        printf("%d", cub);
        
    }
     int main()
{
    int num;
    printf("Enter a number");
    scanf("%d",&num);
    cube_3(num);
    return 0;
}
//argument and return type
    int cube_4(int n)
    {
        return pow(n,3);
    }
    int main()
    {
        int num;
        printf("Enter a number");
        scanf("%d",&num);
        printf("Cube of %d is %d",num,cube_4(num));
        return 0;
    }