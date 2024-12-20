#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("data.txt", "a");
    if(fp == NULL){
        printf("Error opening file");
        exit(0);
    }
    printf("Cursor current position = %d\n", ftell(fp));
    fseek(fp, 0, SEEK_SET);
    printf("Current position = %d\n", ftell(fp));
    char ch;
    while( ch != EOF){
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}