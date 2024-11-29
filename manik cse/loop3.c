//wap to print the sum of all the numbers from 1 to n

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }

    printf("The sum of all numbers from 1 to %d is: %d\n", n, sum);

    return 0;
}



