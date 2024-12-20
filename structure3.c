//Wap to store the information of student marks using structure and find total marks.
#include <stdio.h>
struct student
{
    int roll number;
    char name[30]];
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
    for(int i = 0; i < 5; i++) 
    scanf("%d",&s1.marks[i]);
    total += s1.marks[i];
}
printf("Roll number =   %d",s1.roll);
printf("name = %s\n",s1.name);
printf("total marks = %d\n",s1.type);
return 0;
}