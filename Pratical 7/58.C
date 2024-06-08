#include<stdio.h>
#include<conio.h>
void main(){
int cost,sell;
clrscr();
printf("enter the cost \n");
scanf("%d",&cost);
printf("enter the sell price \n");
scanf("%d",&sell);
if(sell-cost>=0)
printf("profit is %d",sell-cost);
else
printf("loss is %d",cost-sell);
getch();
}
