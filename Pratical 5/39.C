/*Write a C program to read the roll no, marks of three subjects and calculate the total, percentage and 
		division.
		Test Data :
		Input the Roll Number of the student :784
		Input the marks of Physics, Chemistry and Computer Application : 70 80 90
		Expected Output :
		Roll No : 784
		Marks in Physics : 70
		Marks in Chemistry : 80
		Marks in Computer Application : 90
		Total Marks = 240
		Percentage = 80.00
		Division = First
*/
#include<stdio.h>
#include<conio.h>
void main(){
int roll,sub1,sub2,sub3,total,div;
float prt;
clrscr();
printf("enter the roll num \n");
scanf("%d",&roll);
printf("enter the marks of 3 Subjects \n");
scanf("%d%d%d",&sub1,&sub2,&sub3);
total=sub1+sub2+sub3;
prt=total*100/300;
printf("your roll num is %d\n",roll);
printf("mark of sub1 is %d\n",sub1);
printf("mark of sub2 is %d\n",sub2);
printf("mark of sub3 is %d\n",sub3);
printf("the total is %d\n",total);
printf("the percentage is %f \n",prt);
prt>=90 ? printf("the division is first\n"):
prt>=70 ? printf("your division is second \n"):
prt>=50 ? printf("your division is third \n") :
printf("you are in last division");
getch();
}
