#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	
	fp=fopen("go.txt","w");	// create new file in last opened diractory
	fclose(fp);
}