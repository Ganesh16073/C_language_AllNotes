/*Write a c program to enter days and convert into weeks , months and years.
*/
#include<stdio.h>
#include<conio.h>
void main(){
int days,week,month,year;
clrscr();
printf("enter the no of days");
scanf("%d",&days);
year=days/365;
month=days/30;
week=days/7;
printf("the no of days is %d \n year = %d \n month= %d \n week = %d \n ",days,year,month,week);
getch();
}

