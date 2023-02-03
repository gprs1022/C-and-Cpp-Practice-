//Hierachical
#include<iostream.h>
#include<conio.h>
class parant
{
public:
int a;
};
class child1:public parant1

{

public:
void show(int b)
{
a=b;
cout<<a;
}
};
class child1:public parant1
{
public:
void dis(int x)
{
a=x;
cout<<a;
}
};
void main()
{
clrscr();
child1 c1;
c1.show(10);
child c2;
c2.dis(20);
getch();
}