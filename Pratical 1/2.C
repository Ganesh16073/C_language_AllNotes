

/*	Q 2. Write a C program to input all basic data types and print its output.
	
	Example :-
	Input :-   int a=2 ;              
					char ch='A' ;
					float f=3.14f;
					double d=2.34647;
					long int b=1234545;
					long double s=1.2345589985;
	
	Output:-		a=2 ;              
					    ch='A' ;
					    f=3.14f;
					    d=2.34647;
					    b=1234545;
					    s=1.2345589985; */
#include<stdio.h>
#include<conio.h>
void main(){
int a;
char ch;
float f;
double d;
long int b;
long double s;
clrscr();
printf("\n enter the Integer ");
scanf("%d",&a);
printf("\n integer= %d",a);

printf("\n Enter the Charater");
scanf("%c",&ch);
flushall();
printf("\n character= %c",ch);

printf("\n Enter the float");
scanf("%f",&f);
printf("\n float= %f",f);

printf("\n Enter the double");
scanf("%lf",&d);
printf("\n double= %d",d);

printf("\n Enter the long int");
scanf("%ld",&b);
printf("\n long int= %ld",b);

printf("\n Enter the long double");
scanf("%lf",&s);
printf("\n long double= %lf",s);

getch();

}


