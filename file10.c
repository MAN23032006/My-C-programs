// Wap to count the number of characters in a file
#include <string.h>
#include <stdio.h>
int main(){
    FILE *fp;
    char filename[50];
    int count = 0;
}

fp = fopen(filename, "r");

if(fp == NULL){
    printf("Error opening file");
    return 1;
}

while(fgetc(fp)!= EOF){
    count++;
}

fclose(fp);

printf("Number of characters in the file %s is %d\n", filename, count);

return 0;


