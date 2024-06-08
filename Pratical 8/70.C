#include<stdio.h>
#include<conio.h>
void main(){
char grade,e,v,g,a,f;
clrscr();
printf("enter your grade");
scanf("%c",&grade);
if(grade=='e' || grade=='E')
 printf("excelent \n");
else if(grade=='v' || grade=='V')
 printf("very good \n");
else if(grade=='g' || grade=='G')
 printf("good \n");
else if(grade=='a' || grade=='A')
 printf("average \n");
else if(grade=='f' || grade=='F')
 printf("fail \n");
else
printf("grade does not exist");
getch();
}