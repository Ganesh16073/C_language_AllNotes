#include<stdio.h>
#include<conio.h>
void main(){
    int no,choice,s1,s2,s3,year,a;
    char c;
    clrscr();
    printf("Enter 1. to Check whether a number is divisible by 5 and 11 or not.\n");
	printf("Enter 2. to Check whether triangle is equilateral , isoscale  or scalene.\n");
	printf("Enter 3. to Check whether a year is leap year or not.\n");
	printf("Enter 4. to Input any alphabet and check whether it is vowel or consonant.\n");
	printf("Enter 5. to Input any character and check whether it is alphabet, digit or special symbol.\n");
scanf("%d",&choice);

 switch(choice){
    case 1:
	printf("enter the number \n");
	scanf("%d",&no) ;
	if(no%5==0)
	printf("num is disible by 5");
	if(no%11==0)
	printf("num is divisible by 11");
	if(no%5!=0 && no%11!=0)
	printf("no not divisible by 5 or 11");
	break;
    case 2:
	printf("enter the 3 side of triangle \n");
	scanf("%d%d%d",&s1,&s2,&s3);
	if(s1+s2+s3==180)
	printf("it is equlateral triangle");
	else if (s1==s2 ||s2==s3 ||s3==s1)
	printf("it is  isoscale");
	else
	printf("it is scalene");
	break;
    case 3:
	printf("enter the year \n") ;
	scanf("%d",&year);
	if(year%4==0 && year%400==0)
	printf("it is leap year");
	else
	printf("it is not a leap year");
	break;
    case 4:
	printf("enter a alphabet \n");
	scanf("%c",&c);
	if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'
	||c=='I'||c=='O'||c=='U'){
	printf("it is vowle");
	}
	else
	printf("it is consonant")   ;
	break;
    case 5:
    printf("enter the digit or  alphbet \n ");
	scanf("%c",&c);
	if(c>='a'&& c<='z'||c>='A'&& c<='Z')
	printf("it is alphabet");
	else if(c>='0' && c<='9')
	printf("it is digit");
	else
	printf("it is symbol");
	break;
 }


getch();
}


