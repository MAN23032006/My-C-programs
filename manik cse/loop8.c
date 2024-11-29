#include<stdio.h>
#include<math.h>
int main() {
    int num, count;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    int lastdigit = num%10;
    num = num/10;
    count = (int)log10(num);
    int firstdigit = num/ pow(10,count);
    int rm = num%(int)pow(10,count);
    num =lastdigit*pow(10,count +1)+ rm*10 + firstdigit;
    printf("after swapping number is = %d",num);
    return 0;
}
