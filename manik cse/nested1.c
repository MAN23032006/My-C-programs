#include<stdio.h>
#include<math.h>

int main() {
    int n;
    printf("enter no of rows:");
    scanf("%d",&n);
    for(int i = 1; i<=5;i++)
    {
        for(int j=1;j<=i;j++){
        printf("*");
    }
    printf("\n");

    }
return 0;

}