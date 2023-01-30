#include<iostream.h>
#include<conio.h>
class base
{
int a;
public:
void fix(int b)
{
a=b;
}
void show()
{
cout<<a;
}
}
void main()
{
base B[3];
for(int i=0; i<3; i++)
{
B[1]fix(10+i);
B[1];show();
}
}