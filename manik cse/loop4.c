//wap to print all the even numbers from 1 to n
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n, i,sum=0;
    printf("Enter a number: ");
    scanf("%d", &n);
     for(i = 1; i <= n;  i++){
        if(i%2==0)
        sum = sum +i;
    }
    printf("sum = %d", sum);
    return 0;

}


