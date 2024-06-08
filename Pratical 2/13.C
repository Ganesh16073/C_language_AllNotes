/*Q7. Write a C program to enter temperature in Celsius and convert it into Fahrenheit.
	
	Formula :-  
	 fah = (cel * 9 / 5) + 32; */

#include<stdio.h>
#include<conio.h>
void main(){
float fah,cel;
clrscr();
printf("enter the celsus \n");
scanf("%f",&cel);
fah=(cel*9/5)+32  ;
printf("the fahrenhiet is %f",fah);
getch();
}


