
#include<iostream>
using namespace std;

class Point
{
	int x,y;
	public:
	Point(int a=0, int b=0)
	{
		x = a;
		y = b;	
	}	
	Point operator ++()
	{
		return (x++, y++);
	}
	void setter()
	{
		cout<<"Enter value for x: "<<endl;
		cin>>x;
		cout<<"Enter value for y: "<<endl;
		cin>>y;
	}
	void getter()
	{
		cout<<"X is: "<<x<<endl;
		cout<<"Y is: "<<y<<endl;
	}
};

int main()
{
	Point obj1, obj2;
	obj1.setter();
	obj1.getter();
	obj2 = ++obj1;
	obj2.getter();
}
