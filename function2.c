#include<stdlib.h>
#include<stdio.h>
void show(int a, int b){
a = 1000;
b = 2000;
printf("a=%d, b=%d\n", a,b);
}
int main(){
    int x = 500, y = 100;
    show(x, y);
    printf("x=%d, y=%d\n", x, y);
    return 0;
}
