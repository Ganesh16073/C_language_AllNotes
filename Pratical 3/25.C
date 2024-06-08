/* Write a C program to check whether a number is divisible by 5 and 11 or not.*/
#include<stdio.h>
#include<conio.h>
void main(){
int no;
clrscr();
printf("enter number to check the number is divisible by 5 or not \n");
scanf("%d",&no);
no%5==0 ? printf("the num %d divisible by 5 \n",no) :
printf("the no %d not divisible by 5 \n",no);

no%11==0 ? printf(" and the num %d divisible by 11 \n",no) :
printf("and the no %d not divisible by 11 \n",no);
getch();
}