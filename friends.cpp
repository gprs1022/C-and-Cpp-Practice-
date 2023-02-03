#include<iostream>
using namespace std;
class comlpex
{
	int x;
	int y;
	public:
	complex()
	{
		x=0;
		y=0;
		
	}
	complex(int m, int n)
	{
		x=m;
		y=n;
	}
	friend complex add(complex,complex);
	void show();
};
complex add(complex T1,complex T2)
{
	complex T
	T.x=T1.x+T2.x;
	T.y=T1.y+T2.y;
	return T;
}
void complex::show()
{
	cout<<x<<"+i"<<y<<endl;
}
int main()
{
	complex c1(2,3),c2(4,5),c3;
	c3=c1.add(c1,c2);
	c3.show();
	return 0;
}

