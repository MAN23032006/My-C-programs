//wap to find whether the number is prime or not
#include<stdio.h>
#include<math.h>

int main() {
    int i=2,num,flag = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    while(i <= num/2){
        if(num % i == 0){
            flag = 1;
            break;
        }
        i++;
    }
    if(flag == 0)
    {
        printf("%d is a prime number.", num);
    }
    else{
        printf("%d is not a prime number.", num);
    }
    return 0;
