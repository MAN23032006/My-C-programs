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
    //logic of insertion sort
    for(int i=0;i<n;i++){
        int val = arr[i];
        int j= i-1;
        while(j>=0 && arr[j]>val)
    {
            arr[j+1] = arr[j];
            j--;
        }
        if(i != (j+1))
        arr[j+1] = val;
        }
        printf("after sorting elements are: \n");
        for(i=0;i<n;i++){
        printf("%d ",arr[i]);}
        
        return 0;

}


