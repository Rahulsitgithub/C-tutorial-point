#include<stdio.h>
#include<conio.h>
void main()
{
char str[20],a[20];
int i,c=0;
clrscr();
printf("\nenter any string = ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='a' && str[i]<='e'||str[i]>='A'&&str[i]<='E')
c++;
}
printf("\n\nno. of string which comes between a to e = %d",c);
getch();
}