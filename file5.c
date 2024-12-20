//WAP to write a string in a file
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("data.txt", "a");
    if(fp == NULL){
        printf("Error opening file");
        exit(0);
    }
    char str[50];
    printf("Enter a string");
    scanf("%[^\n]*c", str);   //   gets(str)
    strcat(str, "\n");
    fputs(str, fp);
    fclose(fp);
    return 0;
}