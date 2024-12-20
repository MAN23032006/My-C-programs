#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("data.txt", "a");
    if(fp == NULL){
        printf("Error opening file");
        exit(0);
    }
    int x, y;
    fscanf(fp, "%d %d", &x, &y);
    int sum = x + y;
    fprintf(fp, "\nSum of %d and %d is %d",x, y, sum);
    fclose(fp);
    return 0;
}