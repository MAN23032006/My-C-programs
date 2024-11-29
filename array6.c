//wap to count the number of even and odd elements in an array
include<stdio.h>
#include<stdlib.h>
int main(){
    int n,sum;
     printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr1[n],arr2[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr1[i]);
        
  //logic to copy data from one array to another
    for(int i=0; i<n; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("elements of array 1 are:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr1[i]);
    printf("\nElements of array 2 are:\n");
    for(int i=0; i<n; i++)
        printf("%d ", arr2[i]);
    return 0;
}