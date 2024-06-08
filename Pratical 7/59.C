#include<stdio.h>
#include<conio.h>
void main(){
char c;
clrscr();
printf("enter the char \n");
scanf("%c",&c);
if(c>='a' && c<='z')
printf("it is in lower case");
if(c>='A' && c<='Z')
printf("it is in uper case") ;
getch();
}
