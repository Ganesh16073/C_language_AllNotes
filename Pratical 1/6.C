/*	Q 6. Write a C program to enter radius of a circle and find its diameter,area and circumference.
	 Formula :-
						diameter=2 * radius;
						circumference = 2 * 3.14 * radius;
						0area = 3.14 * radius * radius; */
#include<stdio.h>
#include<conio.h>
void main(){
float radius,diameter,area,circum;
clrscr();
printf("enter the radius");
scanf("%f",&radius);
diameter=2*radius;
circum=	2*3.14*radius;
area=3.14*radius*radius;
printf("\n diameter = %f",diameter);
printf("\n circumfurence = %f",circum);
printf("\n area = %f",area);
getch();
}