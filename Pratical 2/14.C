	/* Q8. Write a C program to accept input from user and calculate the Resistance , Current and Voltage.
	
	Formula :-
	
	resistance = voltage / current;
	current = voltage / resistance;
	voltage = current * resistance; */

#include<stdio.h>
#include<conio.h>
void main(){
int resistance,voltage,current;
int resistance1,voltage1,current1,resistance2,voltage2,current2,resistance3,voltage3,current3;
clrscr();



printf("enter the voltage and current to find resistance \n");
scanf("%d %d",&voltage1,&current1);
resistance=voltage1/current1;
printf("the resistance is %d \n",resistance);

printf("enter the voltage and resistance to find current \n");
scanf("%d %d",&voltage2,&resistance2);
current=voltage2/resistance2;
printf("the current is %d \n",current);

printf("enter the resistance and current to find voltage \n");
scanf("%d %d",&resistance3,&current3);
voltage=resistance3*current3;
printf("the voltage is %d \n",voltage);



getch();
}

