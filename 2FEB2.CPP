#include<stdio.h>
#include<conio.h>
void main()
{
char str[20],a[20],k=-1,g,f=-1;
int i;
clrscr();
printf("\nenter any string = ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
k++;
g=k+1;
if(k%2==0)
{
for(i=0;str[i]!='\0';i++)
a[k--]=str[i];
a[g]='\0';
for(i=0;str[i]!='\0';i++)
{
if(a[i]==str[i])
f++;
else
break;
}
if(f==g-1)
printf("\n\n%s is a palindrome string",str);
else
printf("\n\n%s is not a palindrome string",str);
}
else
printf("\n\nplz insert a string with odd no. of letters");
getch();
}