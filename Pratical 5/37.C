/*Write a C program to accept two integers and check whether they are equal or not.
		Test Data : 15 15
		Expected Output :
		Number1 and Number2 are equal
*/
#include<stdio.h>
#include<conio.h>
void main(){
int no1,no2;
clrscr();
printf("enter the two numbers \n");
scanf("%d%d",&no1,&no2);
no1==no2 ? printf("the no1 and no2 are equal"):
printf("the  no are not equal");
getch();
}