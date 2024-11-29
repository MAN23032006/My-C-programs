#include<stdio.h>
#include<stdlib.h>
int main(){
    int num,cube;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num > 0)
    {
        cube = num *num * num;
        printf("cube of %d %d",num, cube);

    }
    return 0;
}
