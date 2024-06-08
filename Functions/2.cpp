#include<stdio.h>
#include<conio.h>
int main()
{
	void areacircle(int);
	void arearect(int,int);
	void areatri(int,int);
	void areaqua(int,int,int);
	void areacircum(int);
	int radius,l,b,base,hight,diagonal,h1,h2,choice;
	printf("Enter the option\n");
	printf("1 : Area of Circle\n");
	printf("2 : Area of Rectangle\n");
	printf("3 : Area of Triangle\n");
	printf("4 : Area of Quadratial\n");
	printf("5 : Area of Circumference\n");
	scanf("%d",&choice);
	
	switch(choice)
	{
		case 1:
			printf("Enter radius\n");
			scanf("%d",&radius);
			areacircle(radius);
			break;
			
		case 2:
			printf("Enter Length and Breath\n");
			scanf("%d%d",&l,&b);
			arearect(l,b);
			break;
		case 3:
			printf("Enter Base and Hight\n");
			scanf("%d%d",&base,&hight);
			areatri(base,hight);
			break;
		case 4:
			printf("Enter Diagonal and Hight 1 and Hight 2\n ");
			scanf("%d%d%d",&diagonal,&h1,&h2);
			areaqua(diagonal,h1,h2);
			break;
		case 5:
			printf("Enter radius\n");
			scanf("%d",&radius);
			areacircum(radius);
			break;
		default:
			printf("Invalid Choice");
			
	}
}
void areacircle(int x)
{
	printf("Area Of Circle is %f\n",3.14*x*x);
}
void arearect(int x,int y)
{
	printf("Area Of Rectangle is %d\n",x*y);
}
void areatri(int x,int y)
{
	printf("Area Of Triangle is %f\n",0.5*x*y);
}
void areaqua(int x,int y,int z)
{
	printf("Area Of Quad is %f\n",(0.5*x*(y+z)));
}
void areacircum(int x)
{
	printf("Area Of Circumference is %f\n",2*3.14*x);
}