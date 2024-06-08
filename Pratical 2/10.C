/* wap to enter 5 subject mark and calculate total and percentage */
#include<stdio.h>
#include<conio.h>
void main(){
int a,b,c,d,e,total;
float per;
clrscr();
printf(" enter the marks of 5 subject \n ");
scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
total=a+b+c+d+e;
per=(total*100)/500;
printf("\n the total marks is %d",total);
printf("\n percentage of mark %f",per);
getch();
}


