#include<stdio.h>
#include<conio.h>
void algebricfuncation();
void main()
{
clrscr();
getch();
algebricfuncation();
}
void algebricfuncation()
{
int a,b,x;
scanf("%d%d",&a,&b);
x=(a*a)+(b*b)+(2*a*b);
printf("%d",x);
}