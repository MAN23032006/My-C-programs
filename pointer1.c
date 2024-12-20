//write a c program to check the number is prime, armstrong, and perfect number using pointer

#include<stdio.h>
#include<conio.h>

int isPrime(int *num);
int isArmstrong(int *num);
int isPerfect(int *num);
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if(isPrime(&num))
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }


    if(isArmstrong(&num))
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }


    if(isPerfect(&num))
    {
        printf("%d is a perfect number.\n", num);
    }
    else
    {
        printf("%d is not a perfect number.\n", num);
    }
    
    return 0;
    }
    

