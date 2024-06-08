#include<stdio.h>
#include<conio.h>
void main(){
char ch='a';
clrscr();
while(ch<='z'){
printf("%c ",ch);
ch=ch++;
}
getch();
}