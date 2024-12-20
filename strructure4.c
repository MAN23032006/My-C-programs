//Wap to store the information of 2 students and find total marks
#include <stdio.h>
struct student
{
    int roll number;
    char name[30];
    int marks[5];
};
int main(){
    struct student s1;
    int total = 0;
    printf("Enter Roll Number:");
    Scanf("%d",&s1.rollnumber);
    printf("Enter name: ");
    scanf("\n%[^\n]s",&s1.name);
    printf("enter 5 subject marks: ");
    for(int i = 0; i < 5; i++) {
    scanf("%d",&s1.marks[i]);
    total += s1.marks[i];
    }
     struct student s2;
    int total = 0;
    printf("Enter Roll Number:");
    Scanf("%d",&s2.rollnumber);
    printf("Enter name: ");
    scanf("\n%[^\n]s",&s2.name);
    printf("enter 5 subject marks: ");
    for(int i = 0; i < 5; i++) {
    scanf("%d",&s2.marks[i]);
    total += s2.marks[i];
    }
}

printf("%d %s %d\n",s1.roll number, s1.name,s1.total);
printf("%d %s %d\n",s2.roll number, s2.name,s2.total);
return 0;
}