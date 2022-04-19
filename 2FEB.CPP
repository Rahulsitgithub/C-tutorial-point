#include<stdio.h>
#include<conio.h>
void main()
{
char str[20];
int i;
clrscr();
printf("\nenter any string\n");
scanf("%s",str);
printf("\n your string=%s",str);
for(i=0;str[i]!='\0';i++)
printf("\n str[%d]=%c",i,str[i]);
getch();
}
