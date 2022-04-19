#include<stdio.h>
#include<conio.h>
#include<string.h>
union stud
{
char na[20];
char empno[10];
int sal;
int s;
};
void main()
{
union stud s;
clrscr();
printf("\nenter sal\n");
scanf("%d",&s.sal);
printf("\nsal=%d",s.sal);
printf("\nsal=%d",s.sal);
getch();
}