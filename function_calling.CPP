#include<iostream.h>
#include<conio.h>
class base
{
int a;
public:
void fix(int b)
{
a=b;
}void show()
{
cout<<a;
}
};
void main()
{
base B1;
int k;
cin>>k;B1.fix(k);
B1.show();
}