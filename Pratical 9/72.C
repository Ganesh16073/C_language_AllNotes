#include<stdio.h>
#include<conio.h>
void main(){
int no,b,choice;
clrscr();
printf("enter a number");
scanf("%d",&no);
printf("enter 1 to check no is positive, negative or zero\n");
printf("enter 2 to check no is odd or even\n");
printf("enter 3 to check maximum no bewtween two number\n");
scanf("%d",&choice);
switch(choice){
case 1:
	if(no==0)
	printf("no is zero");
	else if(no>0)
	printf("no is positive");
	else if(no<0)
	printf("no is negative");
	break;
case 2:
	if(no%2==0)
	printf("no is even ");
	else
	printf("no is odd");
	break;
case 3:
	printf("enter second number to check maximum number\n");
	scanf("%d",&b);
	if(no>b)
	printf("no1 is greater");
	else
	printf("no2 is greater");
	break;
default:
	printf("invalid");
}
getch();
}


