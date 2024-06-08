/*rite a c program to check whether triangle is equilateral , isoscale  or scalene.
*/
#include<stdio.h>
#include<conio.h>
void main(){
int ang1,ang2,ang3,equ,isoscale,scalene;
clrscr();
printf("enter the three angle \n");
scanf("%d%d%d",&ang1,&ang2,&ang3);
ang1==ang2 &&ang2==ang3 ?
printf("it is equilateral triangle \n") :
printf("it is not equ triangle \n");

ang1==ang2 || ang2==ang3 || ang3==ang1 ?
printf("it is isoscale triangle") : printf("it is scalene triangle");
getch();
}

