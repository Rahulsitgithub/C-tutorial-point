#include<stdio.h>
#include<conio.h>
void main()
{
char str[20],v[20],c[20],m=0,k=0;
int i;
clrscr();
printf("\nenter any string = ");
scanf("%s",str);
for(i=0;str[i]!='\0';i++)
{
if(str[i]=='a'||str[i]=='A'||str[i]=='e'||str[i]=='E'||str[i]=='i'||str[i]=='I'||str[i]=='o'||str[i]=='O'||str[i]=='u'||str[i]=='U')
{
v[m]=str[i];
m++;
}
else
{
c[k]=str[i];
k++;
}
}
v[m]='\0';
c[k]='\0';
printf("\nword with vowel only = %s",v);
printf("\nword with consonant only = %s",c);
getch();
}