//WAP to read and display the details of a student
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student{
    int roll no;
    char name[30];
    char branch[10];
    char section[10];
    float marks;
};
int main()
{
    struct student s1 ;
    printf("Enter Roll Number:");
    Scanf("%d",&s1.rollnumber);
    printf("Enter Branch Number:");
    gets(s1.branch name);
    printf("Enter name: ");
    fflush(stdin);
    gets(s1.name);
    printf("Enter section: ");
    gets(s1.section);
    printf("enter marks:");
    scanf("%f",&s1.marks);
    return 0
}