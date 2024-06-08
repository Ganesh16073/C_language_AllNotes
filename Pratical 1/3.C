/* Q 3. Write a C program to enter two numbers and perform all arithmetic operations. */

#include<stdio.h>
#include<conio.h>
void main(){
int a,b;
clrscr();
printf("enter the first no");
scanf("%d",&a);

printf("enter the second no");
scanf("%d",&b);

printf("\n add of a and b %d",a+b);
printf("\n subraction of a and b %d",a-b);
printf("\n multiplication of a and b %d",a*b);
printf("\n division of a and b %d",a/b);
printf("\n remainder of a and b %d",a%b);


getch();
}
