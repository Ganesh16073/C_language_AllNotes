/* Q9. Write a C program to calculate the simple intrest. */
#include<stdio.h>
#include<conio.h>
void main(){
    int principal,rate,time,si;
    clrscr();
    printf("enter the principal \n");
    scanf("%d",&principal);
    printf("enter the rate of interst \n");
    scanf("%d",&rate);
    printf("enter the time period \n");
    scanf("%d",&time);
    si=(principal+rate+time)/100;
    printf("the simple intrest is %d",si);
    getch();

}