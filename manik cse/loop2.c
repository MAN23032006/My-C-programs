//WAP TO PRINT ALL NUMBERS FROM N TO 1

#include<stdio.h>
#include<stdlib.h>

int main(){
    int n;
    printf("ENTER A NUMBER");
    scanf("%d", &n);

    for(int i = n; i >= 1; i--){
        printf("%d ", i);
    }

    return 0;
}