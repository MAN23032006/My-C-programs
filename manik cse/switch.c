//Wap to take day number as an input and print the day number corresponding to that number
#include<stdio.h>
#include<stdlib.h>
int main(){
    int day;
    printf("Enter a day number (1-7): ");
    scanf("%d", &day);
    switch(day){
        case 1: printf("Monday"); break;
        case 2: printf("Tuesday"); break;
        case 3: printf("Wednesday"); break;
        case 4: printf("Thursday"); break;
        case 5: printf("Friday"); break;
        case 6: printf("Saturday"); break;
        case 7: printf("Sunday"); break;
        default: printf("Invalid day number");
    }
    return 0;

}