/* Q6. Write a C program to enter temperature in Fahrenheit and convert to Celsius.
	
	Formula :-  
	cel = (fah - 32) * 5 / 9;
	*/

#include<stdio.h>
#include<conio.h>
void main(){
float farh,cel;
clrscr();
printf("enter the celsius \n");
scanf("%f",&farh);
cel=(farh-32)*5/9;
printf("the cel id %f \n",cel);
getch();
}
