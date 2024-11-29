//wap to read and display the elements of 2D array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int rowsize, colsize;
    printf("enter row and col size of 2d array :");
    scanf("%d%d", &rowsize, &colsize);
    int arr[rowsize][colsize];
     printf("enter elements of 2d array : \n");
    for(int i=0;i<rowsize;i++){
        for(int j=0;j<colsize;j++){
            printf("%d",arr[i][j]);
    }

}
printf("elements of 2d array : \n");
for(int i=0; i<4; i++){
    for(int j=0; j<3; j++){
        printf("%d",arr[i][j]);
    }
    printf("\n");
}
return 0;
}