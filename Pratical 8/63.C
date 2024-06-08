#include<stdio.h>
#include<conio.h>
void main(){
int year;
clrscr();
printf("enter the year \n") ;
scanf("%d",&year);
if(year%4==0 && year%400==0)
printf("it is leap year");
else
printf("it is not a leap year");
getch();
}