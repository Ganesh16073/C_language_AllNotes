#include<stdio.h>
#include<conio.h>
void main(){
int choice;
printf("enter month \n");
scanf("%d",&choice);
switch(choice){
case 1:
	printf("31 in january");
	break;
case 2:
	printf("29 in Feb");
	break;
case 3:
	printf("31 in Mar");
	break;
case 4:
	printf("30 in April");
	break;
case 5:
	printf("31 in may");
	break;
case 6:
	printf("30 in jun");
	break;
case 7:
	printf("31 in july");
	break;
case 8:
	printf("31 in Augest");
	break;
case 9:
	printf("30 in sep");
	break;
case 10:
	printf("31 in Oct");
	break;
case 11:
	printf("30 in Nov");
	break;
case 12:
	printf("31 in Dec");
	break;
}
getch();
}





