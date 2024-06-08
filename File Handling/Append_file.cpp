#include<stdio.h>
#include<conio.h>
int main()
{
	FILE *fp;
	
	fp=fopen("go.txt","a");	// create new file in last opened diractory
	
	fprintf(fp,"\nWritten by file done for append");	// write in file
	fclose(fp);
}