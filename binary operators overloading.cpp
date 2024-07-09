// This file contains a program of binary operator overloading in C++
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
    Point operator + (const Point obj)
    {
    	return(x + obj.x, y + obj.y);
	}
	int setter()
	{
		cout<<"Enter value for x: "<<endl;
		cin>>x;
		cout<<"Enter value for y: "<<endl;
		cin>>y;
	}
	void show()
	{
		cout<<x<<endl<<y<<endl;
	}
    
};

int main()
{
    Point p,j;
    cout<<"Enter values: "<<endl;
    p.setter();
    j.setter();
	 Point result = p + j;
	  
    cout<<"Values are : "<<endl;
    result.show();

}
