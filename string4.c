//wap to find total number of alphabets,digits or special characters in a string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    int alpha =0; digit =0; symbol =0;
    printf("Enter a string: ");
    gets(str);
    int i;
    for(i=0; str[i]!='\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            str[i] = str[i] - 32;
        }
        else if(str[i] >= 'A' && str[i] <= 'Z'){
            str[i] = str[i] + 32;
        }
    }
    printf("Toggled case string: %s", str);
    return 0;
}