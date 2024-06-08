/* enter base and hight of triangle and find area */
#include<stdio.h>
#include<conio.h>
void main(){
int base,hight,area;
clrscr();
printf("enter the base and hight \n");
scanf("%d %d",&base,&hight);
area=(hight*base)/2;
printf("the area of the triangle is %d \n",area);
getch();
}

