//wap to sum the elements of an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum;
     printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
        
  //logic to find sum of elements of an array
    for(int i=0; i<n; i++)
    {
        scanf("%d ", &arr[i]);
        sum = sum+arr[i];
    }
    printf("Sum of the elements of the array is: %d", sum);
    return 0;
}
