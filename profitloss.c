#include<stdio.h>
int main(){
    int cp;
    printf("enter the cost price :");
    scanf("%d",&cp);
    int sp;
    printf("enter the selling price :");
    scanf("%d",&sp);
    if(sp>cp)
    printf("profit is %d",sp-cp);
if(sp<cp)
printf("loss is %d",cp-sp);
if(sp==cp)
printf("no profit no loss");
return 0;
}