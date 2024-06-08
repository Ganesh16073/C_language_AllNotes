/*Write a C program to input any alphabet and check whether it is vowel or consonant.
*/
#include<stdio.h>
#include<conio.h>
void main(){
char c,vowel,cosonant;
clrscr();
printf("enter the character \n");
scanf("%c",&c);
c=='a'|| c=='e'|| c=='i'|| c=='o'|| c=='u' ? printf("it is vowel"):
printf("it is consonant");
getch();
}



