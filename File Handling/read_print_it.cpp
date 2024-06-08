#include<stdio.h>
#include<conio.h>
int main()
{
	char ch[20];
	FILE *fp;
	fp=fopen("C://Users//Ganesh//Desktop//ganesh.txt","r");
	if(fp==NULL)
	{
		printf("The file Not available\n");
	}
	else
	{	
//		fgets(ch,10,fp);	if we want to limited character use function
//		printf("%s",ch);
		while(fgets(ch,20,fp))
		{
			printf("%s\n",ch);
		}
	}
}