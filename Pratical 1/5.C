
	/* Q 5. Write a C program to enter length and breadth of a rectangle and find its area.
	
	Formula -  area= length * breadth; */

#include<stdio.h>
#include<conio.h>
void main(){
int len,br,area;
clrscr();
printf("enter the length and breath \n");
scanf("%d %d",&len,&br);
area=len*br;
printf("the area of rectangle is %d",area);

getch();
}