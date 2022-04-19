#include<stdio.h>
#include<conio.h>
void main()
{
char str[20],a;
int i,c=0;
clrscr();
printf("\nenter any string = ");
scanf("%s",str);
printf("\nenter any character for check it's existence = ");
scanf(" %c",&a);
for(i=0;str[i]!='\0';i++)
{
if(str[i]==a)
c++;
}
if(c>0)
printf("\ngiven character %c exist %d times in the string",a,c);
else
printf("\n given character doesn't exist in above string");
getch();
}
