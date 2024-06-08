#include<stdio.h>
#include<conio.h>
void main(){
int no1,no2,no3;
clrscr();
printf("enter three no \n");
scanf("%d%d%d",&no1,&no2,&no3)  ;
if(no1>no2 && no1>no3)
printf("no1 is greater");
else if(no2>no1 && no2>no3)
printf("no2 is greater");
else if (no3>no1 && no3>no2)
printf("no3 is greater");
getch();
}
