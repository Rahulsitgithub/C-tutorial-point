#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i,f=0;
clrscr();
printf("\nenter any string = ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
{
printf("\n%c is present at %d position in the string",str[i],i+1);
f=1;
}
}
if(f==0)
printf("\nthere's no any vowel present in the string");
getch();
}
