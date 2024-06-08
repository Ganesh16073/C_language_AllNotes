/*Write a C program to find maximum between three numbers.
*/
#include<stdio.h>
#include<conio.h>
void main(){
int no1,no2,no3;
clrscr();
printf("enter  the num");
scanf("%d%d%d",&no1,&no2,&no3);
no1>no2 && no1>no3 ? printf("num 1 is greater \n") :
printf("num 1 is not greater \n");

no2>no1 && no2>no3 ? printf("num 2 is greater \n") :
printf("num 2 is not greater \n");

no3>no2 && no3>no1 ? printf("num 3 is greater \n") :
printf("num 3 is not greater \n");
getch();
}
