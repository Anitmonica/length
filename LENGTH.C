#include<stdio.h>
#include<conio.h>
void main()
{
 char s[]="Anit";
 int i,length=0;
 clrscr();
 for(i=0;s[i]!= '\0';i++)
length++;
printf("length=%d\n",length);
getch();
}