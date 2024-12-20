//wap to count total number of words in a string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    int count = 0;
    printf("Enter a string: ");
    gets(str);
    int findex, lindex, len= strlen(str);
    for(int i=0; i<len; i++){
        if(str[i] == ' '){ 
            findex = i;
            break;
    }
    for(int i=len-1; i>=0; i--){
        if(str[i] == ' '){
            lindex = i;
            break;
        }
    }
    
    int count = 0;
    for(int i = findex; i < lindex; i++){
        if(str[i] == ' ' && str[i-1] == ' '){
            count++;
            }
     printf("%d", count);
     return 0;
    }
    
    
