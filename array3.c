//wap to display the elements of an array in reverse order
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i=0; i<n; i++)
        scanf("%d", &arr[i]);
        
    printf("Elements of the array in reverse order: ");
    for(int i=n-1; i>=0; i--)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}

    