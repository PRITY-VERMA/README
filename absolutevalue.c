#include<stdio.h>
int main(){
    int x;
    printf("enter a number :");
    scanf("%d",&x);
if(x>=0) printf("absolute value is %d",x);
if(x<0){
    //make it positive
    x=x*(-1);
    printf("absolute value is %d",x);
}
return 0;
}