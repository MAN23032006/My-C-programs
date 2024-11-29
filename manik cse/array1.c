//wap to declare,initialize,input and print an array

#include<stdio.h>
int main(){
    //declare an array to store integers
    int arr[5];
    //input elements from the user
    printf("enter 5 numbers:\n");
    for(int i=0; i<5; i++){
         printf("enter number for index %d:", i);
         scanf("%d", &arr[i]);
    }
    //print elements of the array
printf("\n The elements of array are:\n");
    for(int i=0; i<5; i++){    
        printf("%d ", arr[i]);
}
return 0;
}