#include<stdio.h>
#include<conio.h>
int main()
{
    int a[6], value, pos;
    printf("\nEnter array: ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\nEnter value: ");
    scanf("%d",&value);
    printf("\nEnter position: ");
    scanf("%d", &pos);
    for (int i = 5; i > pos - 1; i--)
    {
        a[i] = a[i - 1];
    }

    a[pos - 1] = value;

    for (int i = 0; i < 6; i++)
    {
       printf("%d\n",a[i]);
    }
    return 0;
}