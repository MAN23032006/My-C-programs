//wap to count total number of vowels and consonants in a string
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
    char str[100];
    int vowel =0, consonant =0;
    printf("Enter a string: ");
    gets(str);
    int i;
    for(i=0; str[i]!='\0'; i++){
        if(str[i] >= 'a' && str[i] <= 'z'){
            if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u'){
                vowel;
            }
            else{
                consonant;
            }
        }
    }
    printf("Total number of vowels: %d\n", vowel);
    printf("Total number of consonants: %d\n", consonant);
    return 0;
}

