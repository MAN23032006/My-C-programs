//wap to perform the sum of the diagonal elements of an array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int rowsize, colsize,sum=0;
    printf("enter row and col size of 2d array :");
    scanf("%d%d", &rowsize, &colsize);
    int arr[rowsize][colsize];
     printf("enter elements of 2d array : \n");
    for(int i=0;i<rowsize;i++)
    {
        for(int j=0;j<colsize;j++){
            scanf("%d",&arr[i][j]);
    }

}
//logic to perform sum of diagonal elements  of  matrix
for(int i=0;i<rowsize;i++)
{
    sum= sum + arr[i][i];
    }
    printf("sum of diagonal elements of matrix :%d \n");
    return 0;
}
//
