#include<iostream.h>
#include<conio.h>
class Base
{
int a;
public:
Base (int b)
{
a=b;
}
Base(Base &m)
{
cout<<m.a;
}
};
void main()
{
clrscr();
Base B1(10);
Base B2(B1);
getch();




}