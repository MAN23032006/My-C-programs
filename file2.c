#include<stdio.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("data.txt", "r");
    if(fp == NULL){
        printf("Error opening file");
        exit(0);
    }
    char ch;
    while( ch != EOF){
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}