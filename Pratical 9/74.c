#include<stdio.h>
#include<conio.h>
void main(){
int choice;
printf("enter number of day\n");
scanf("%d",&choice);
switch(choice){
case 1:
	printf("monday") ;
	break;
case 2:
	printf("tuesday");
	break;
case 3:
	printf("wednesday");
	break;
case 4:
	printf("thursday");
	break;
case 5:
	printf("friday");
	break;
case 6:
	printf("saturday");
	break;
case 7:
	printf("sunday");
	break;
default:
	printf("invalid choice");

}
getch();
}