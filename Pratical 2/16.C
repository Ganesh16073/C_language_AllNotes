/* Q10. Write a C program to calculate the compound intrest. */
#include<stdio.h>
#include<conio.h>
void main(){
    int principal,rate,time,ci;
     clrscr();
    printf("enter the principal \n");
    scanf("%d",&principal);
    printf("enter the rate of interst \n");
    scanf("%d",&rate);
    printf("enter the time period \n");
    scanf("%d",&time);
    ci=principal*(1+rate/100*time);
    printf("the compound intrest is %d",ci);
    getch();
}