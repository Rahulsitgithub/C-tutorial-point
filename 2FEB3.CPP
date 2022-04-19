#include<stdio.h>
#include<conio.h>
void main()
{
char str[20],a[20],k=0;
int i;
clrscr();
printf("\nenter any string = ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]>='a' && str[i]<'e'||str[i]<'E')
a[k++]=str[i];
}
a[k]='\0';
if(a[0]!='\0')
printf("\n\nstring with character less than e = %s",a);
else
printf("\n\nthere's no any character less than e in the string");
getch();
}