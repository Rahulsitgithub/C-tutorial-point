#include<stdio.h>
#include<conio.h>
void main()
{
char str[20],a[20],k=-1,g;
int i;
clrscr();
printf("\nenter any string = ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
k++;
g=k+1;
for(i=0;str[i]!='\0';i++)
a[k--]=str[i];
a[g]='\0';
printf("\n\nstring in its reverse order = %s",a);
getch();
}