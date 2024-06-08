#include<stdio.h>
#include<conio.h>
void main(){
char c;
clrscr();
printf("enter a alphabet \n");
scanf("%c",&c);
if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'
||c=='I'||c=='O'||c=='U'){
printf("it is vowle");
}
else
printf("it is consonant")   ;
getch();
}