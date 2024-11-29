//wap to perform the sum of first and last digit of a given number

#include<stdio.h>
#include<math.h>

int main() {
    int num,count = 0
    printf("Enter a number: ");
    scanf("%d", &num);
    int temp= num;
    first = num % 10;
    while (num != 0) {
        num /= 10;
        count ++;
    }
    num = temp;
    int last= num%10;
    int first= num/pow(10,count - 1);
    int sum = first + last;

    printf("Sum of first and last = "%d",sum);

    return 0;
}


