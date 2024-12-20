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
    // read data from file
    rewind(fp);
    char ch;
    while( ch != EOF){
        ch = fgetc(fp);
        printf("%c", ch);
    }
    fclose(fp);
    return 0;
}