#include<stdlib.h>
#include<stdio.h>
void message(void);
int main(){
    int Si = getsimpleinterest();
    printf("simple interest = %d\n", Si);
    message();
    return 0;

}
//function with no argument But return tyoe
int get simple interest(void){
    int P,R,T;
    Printf("enter P,R AND T :");
    scanf("%d%d%d",&P, &R, &T);
    return(P*R*T)/100;
}
