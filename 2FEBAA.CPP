#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i,v=0,c=0;
clrscr();
printf("\nenter any string\n");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
v++;
else
c++;
}
printf("\ntotal vowel in above word=%d",v);
printf("\ntotal consonant in above word=%d",c);
getch();
}