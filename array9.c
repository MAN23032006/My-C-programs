//wap to perform the sum of all the elements of 2d array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int rowsize=r; colsize=c;
    printf("enter row and col size of 2d array :");
    scanf("%d%d", &rowsize, &colsize);
    int arr[rowsize][colsize];
     printf("enter elements of 2d array : \n");
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            printf("%d",arr[i][j]);
    }

}
int sum=0;
for(int i=0; i<rowsize; i++){
    for(int j=0; j<colsize; j++){
        scanf("%d",arr[i][j]);
        sum = sum+arr[i][j];
    }
    printf("sum of all elements of array are %d", sum);
    return 0;

}
//logic to perform the sum of minor diagonal elements  of an array
for(inti=0;int=c-1;i<r;i++&&j>=0;i++;j--){
    sum = sum + arr[i][j];
    return 0;
    printf("sum of minor diagonal elements of array are %d", sum);
    return 0; 
}