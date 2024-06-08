/*Write a c program to check whether triangle is valid or not.
*/
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("enter the 3 side of triangle");
scanf("%d%d%d",&a,&b,&c);
a+b+c==180 ? printf("it is triangle") : printf("it is not a triangle");
getch();
}

