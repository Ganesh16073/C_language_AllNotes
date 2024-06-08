/*	Q5. Write a C program to find first and last digit of a number.
		input- 1234
		output- first - 1
					   last - 4
*/
#include<stdio.h>
#include<conio.h>
void main(){
int no,last,first;
printf("enter 4digit no");
scanf("%d",&no);
last=no%10;
first=no/1000;
printf("the first and last %d %d",first,last);
getch();
}
