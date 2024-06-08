/* find 3rd angle of triangle */
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c;
clrscr();
printf("enter angle 1 and 2\n");
scanf("%d %d",&a,&b);
c=180 - (a+b);
printf("the angle of 3rd side of triangle is %d \n",c);
getch();
}
