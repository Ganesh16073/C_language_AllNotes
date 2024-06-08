/*Write a C program to display this number is reverse.
		input- 123
		output-321
*/
#include<stdio.h>
#include<conio.h>
void main(){
int no,rem,rev;
clrscr();
printf("enter 3digit num to revs");
scanf("%d",&no);
no=(no%10)*100 + ( (no/10)%10 )*10 + no/100;
/*
rem=no%10;
no=no/10;
rev=rem+100;

rem=no%10;
no=no/10;
rev=rem+10;

rem=no%10;
no=no/10;
rev=rem+no;
*/
printf("the swap of no is %d",no);
getch();
}



