//count number of digits in a given number withot using built in function
#include<stdio.h>
#include<math.h>
int main(){
    int num,count = 0;
    printf("enter a number");
    scanf("%d", &num);
    int temp = num;
    
    while(num!=0){
        num /= 10;
        count++;
    }

    
    printf("number of digits in %d is %d", temp, count);
    return 0;
}