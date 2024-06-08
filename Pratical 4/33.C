/*Write a C program to check whether a character is uppercase or lowercase alphabet.
*/
#include<stdio.h>
#include<conio.h>
void main(){
char c;
clrscr();
printf("enter the char \n");
scanf("%c",&c);
c>='A'&& c<='Z' ? printf("it is uppercase") : printf("it is lower case");
getch();
}