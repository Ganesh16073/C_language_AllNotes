/* Write a C program to accept a coordinate point in an XY coordinate system and determine in which quadrant
	the coordinate point lies.*/
#include<stdio.h>
#include<conio.h>
void main(){
int x,y;
clrscr();
printf("enter the value of x");
scanf("%d",&x);
printf("enter the value of y");
scanf("%d",&y);
x>0 && y>0 ? printf("cordinating points lie on first quadrant") :
x<0 && y>0 ? printf("cordinating points lie on second quadrant") :
x<0 && y<0 ? printf("cordinating points lie on third quadrant") :
printf("cordinating points lie on fourth quadrant");
getch();
}