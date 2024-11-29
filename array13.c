//wap to perform the sum of two matrix
#include<stdio.h>
#include<stdlib.h>
int main(){
    int r,c;
    printf("enter row and column size of matrix\n");
    scanf("%d%d", &r,&c);
    int matrix1[r][c], matrix2[r][c];result[r][c];
    printf("enter elements of matrix 1: \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        scanf("%d", &matrix1[i][j]);
    }

printf("enter elements of matrix 2: \n");
    for(int i=0; i<r; i++)
    {
        for(int j=0;j<c; j++)
        scanf("%d", &matrix2[i][j]);
    }
}
//matrix subtraction logic
for(int i=0; i<r; i++)
{
    for(int j=0;j<c; j++)
    {
        result[i][j]=matrix1[i][j]-matrix2[i][j];
        printf("%d ", result[i][j]);
        }
        printf("\n");
}
    

}
