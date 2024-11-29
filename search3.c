//wap to find the largest element in an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i;
    printf("enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    //logic to find second largest element in an array
    int max1 =arr[0], secondMax=arr[0];
    for(i=1; i<n; i++){
        if(arr[i]>max1){
            secondMax=max1;
            max1=arr[i];
        }
        else if(arr[i]>secondMax && arr[i]!=max){
            secondMax=arr[i];
        }
    }
    printf("second largest element is: %d", secondMax);
    return 0;
}