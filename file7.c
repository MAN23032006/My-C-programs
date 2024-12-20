#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("data.txt", "a");
    if(fp == NULL){
        printf("Error opening file");
        exit(0);
    }
    fseek(fp, -20, SEEK_END);
    char ch;
    while( ch != EOF){
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}