/*Write a C program to read the age of a candidate and determine whether he is eligible to cast his/her own 
		vote.
		Test Data : 21
		Expected Output :
		Congratulation! You are eligible for casting your vote.
*/
#include<stdio.h>
#include<conio.h>
void main(){
int age;
clrscr();
printf("enter the age \n");
scanf("%d",&age);
age>=18 ? printf("you are eligible to vote"):
printf("you are not eligible to vote");
getch();
}
