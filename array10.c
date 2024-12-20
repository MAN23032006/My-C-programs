//wap to perform the sum of each row and columns of 2d array
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
//logic to perform sum of each row of  matrix
for(int i=0;i<rowsize;i++)
{
    int sum =0;
    for(int j=0;j<colsize;j++){
        sum = sum+arr[i][j];
    }
    printf("sum of %d row=%d\n",i+1,sum);
}
//logic to perform sum of each column of  matrix
for(int i=0;i<colsize;i++)
{
    int sum =0;
    for(int j=0;j<rowsize;j++){
        sum = sum+arr[i][j];
    }
    printf("sum of %d column =%d\n",i+1,sum);
}
return 0; 
}



