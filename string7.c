//write a c program to check whether the string is palindrome or not
#include<stdio.h>
#include<string.h>
int main()
{
    char str[100], temp[100];
    printf("Enter a string: ");
    gets(str);
    strcpy(temp, str);
    strrev(str);
    if(strcmp(temp, str) == 0)
    {
        printf("%s is a palindrome.", str);
    }
    else
    {
        printf("%s is not a palindrome.", str);
    }
    return 0;

}






