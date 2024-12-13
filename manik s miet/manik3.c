#include<iosteam.h>
#include<stdlib.h>
int main(){
    int x;
    float y;
    double z;
    char ch;
    printf("enter integer value");
    scanf("%d", &x);
    printf("enter float value");
    scanf("%f", &y);
    printf("enter double value");
    scanf("%lf", &z);
    printf("enter character value");
    scanf("%c", &ch);
    printf("x=%d", x);
    printf("y=%f", y);
    printf("%z=%lf",z);
    printf("ch = %c",ch);
    return 0;
}
