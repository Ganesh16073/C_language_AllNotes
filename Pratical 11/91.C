#include<stdio.h>
#include<conio.h>
void main(){
int base,index,p=1,i=1;
clrscr();
printf("enter a num\n");
scanf("%d",&base);
printf("enter the power\n");
scanf("%d",&index);
while(i<=index){
p=p*base;
i++;
}
printf("the num %d and its power %d sum== %d",base,index,p);
getch();
}
