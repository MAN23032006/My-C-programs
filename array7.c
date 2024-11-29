//wap to read and display the elements of 2D array
#include<stdio.h>
#include<stdlib.h>
int main(){
    int arr[4][3];
    printf("enter elements of 2d array : \n");
    for(int i=0;i<4;i++){
        for(int j=0;j<3;j++){
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
