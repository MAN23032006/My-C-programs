#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    printf("enter array size");
    scanf("%d",&n);
    int marks[n];
    //logic to read elements FROM THE USER
    printf("enter %d elements", n );
    for(int i =0;i<5;i++){
        scanf("%d",marks[i]);
    }
    printf("array elements are");
    for(int i=0; i<5; i++){
        printf("%d ",marks[i]);

    }

    
   
    return 0;
}