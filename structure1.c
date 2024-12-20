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
    struct student s1 = {1001,"Andy Smith", "CSE", "a1",89};
    printf("roll number: %d\n", s1.roll);
    printf("name=%s\n", s1.name);
    printf("branch=%s\n", s1.branch);
    printf("section=%s\n", s1.section);
    printf("marks=%f\n", s1.marks);
    return 0;
}

