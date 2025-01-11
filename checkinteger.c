#include<stdio.h>
int main(){
    float f;//f=3.1
    printf ("enter a  real number :");
    scanf("%f",&f);
    int x=(int)f;//a=3
    float a=(float)x;//a=3
    if (f-a==0)
    printf("number is integer");
    if(f-a>0)
    printf("number is not integer");
    return 0;

}


