#include<stdio.h>
#include<stdlib.h>
int main(){
    int n,i,flag=0;
    printf("enter array size: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter %d elements:");
    for(i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int target;
    printf("enter searching element :");
    scanf("%d", &target);
    //logic of linear search
    for(i=0; i<n; i++){
        if(arr[i]==target){
            flag=1;
            break;
        }
    }
    if(flag == 1)
    printf("element found at %d position",i);
    else
    printf("element not found");
    return 0;
}

