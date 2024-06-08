/* Q4. Write a C program to enter side of square and find its area.
	 Formula -   area = side*side */

#include<stdio.h>
#include<conio.h>
void main(){
int area,side;
clrscr();
printf("enter the side of square \n");
scanf("%d",&side);
area=side*side;
printf(" the area of square is %d",area);

getch();
}