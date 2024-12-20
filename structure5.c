//Wap to store the information of n students
#include <stdio.h>
struct student
{
    int roll number;
    char name[30];
    int marks[5];
    int total;
};
int main(){
    int n;
    printf("enter size:");
    scanf("%d",&n);
    struct student stu[n]; //Array of structures
    for(int i=0; i<n; i){
    printf("Enter Roll Number:");
    Scanf("%d",&s1.rollnumber);
    printf("Enter name: ");
    scanf("\n%[^\n]s",&s1.name);
    printf("enter 5 subject marks: ");
    stu[i].total = 0;
    for(int j = 0; j < 5; j++) {
    scanf("%d",&stu[i].marks[j]);
    stu[i].total += s1.marks[j];
    }
    }
     for(int i=0; i<n; i){
   
printf("%10d %15s %10d\n",i,s1.name,stu[i].total);
     }
return 0;
}