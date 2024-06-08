#include<stdio.h>
#include<conio.h>
int main()
{
	int a[6],value,pos,i;
    printf("\nEnter array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter value: ");
    scanf("%d",&value);
    printf("\nEnter position: ");
    scanf("%d", &pos);
    for(i=5;i>pos-1;i--)
    {
    	a[i]=a[i-1];
	}
	a[pos]=value;
	for(i=0;i<6;i++)
	{
		printf("%d\t",a[i]);
	}
	return 0;
}