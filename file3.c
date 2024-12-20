//Wap to read data from the file line by line(string by string)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
    FILE *fp = fopen("data.txt", "r");
    if(fp == NULL){
        printf("Error opening file");
        exit(0);
    }
    char str[50];
    while( !feof(fp) ){
        fgets(str, 50, fp);
        printf("%s", str);
    }
    fclose(fp);
    return 0;
}