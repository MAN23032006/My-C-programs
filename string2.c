//wap to excess each character of a given string one by one
#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    for(int i=0; i<strlen(str); i++)
    {
        printf("%c\n", str[i]);
    }
    return 0;
}