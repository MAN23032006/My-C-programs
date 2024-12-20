//WAP to write a chara in a file
#include<stdio.h>
#include<string.h>fdg
#include<stdlib.h>
int main(){
    FILE *fp = fopen("data.txt", "a");
    if(fp == NULL){
        printf("Error opening file");
        exit(0);
    }
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    fputc(ch, fp);
    printf("Character written successfully to file");
    fclose(fp);
    return 0;
}