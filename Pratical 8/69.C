#include<stdio.h>
#include<conio.h>
void main(){
int age;
clrscr();
printf("enter your age \n");
scanf("%d",&age);
if(age>=18)
printf("you are eligible to vote");
else
printf("you are not eligible");
getch();
}