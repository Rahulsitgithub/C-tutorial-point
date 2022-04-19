#include<conio.h>
#include<stdio.h>
union std
{
char n[20];
char cl[10];
int r;
int age;
};
void main ()
{
std a;
clrscr();
printf("\n\nenter name =");
gets(a.n);
printf("\n\name:%s",a.n);
printf("\n\nenter class =");
gets(a.cl);
printf("\n\nclass:%s",a.cl);
printf("\n\nenter roll =");
scanf("%d",&a.r);
printf("\n\nroll:%d",a.r);
printf("\n\nenter age =");
scanf("%d",&a.age);
printf("\n\nage :%d",a.age);
getch();
}
