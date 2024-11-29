#include<stdio.h>
#include<math.h>

int main() {
    int n, rev=0;
    printf("enter a number :");
    scanf("%d",&n);
    int temp = n;
    while(n!= 0)
    {
        int rem =n%10;
        rev= rev*10 + rem;
        n = n/10;
    }
    if (temp== rev)
    printf("numbe rid pallindrome");
    else
    printf("number is not pallindrome");
    return 0;
}