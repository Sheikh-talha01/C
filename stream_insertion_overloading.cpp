#include<iostream>
using namespace std;

class Point
{
    int x;
    public:
    Point(int a=0)
	{
		x = a;
	}
    friend istream& operator >> (istream& in, Point& p);
    friend ostream& operator<< (ostream& out, Point& p);
};
istream& operator >> (istream& in, Point& p)
{
        in >> p.x ;
        return in;
    }
    
ostream& operator<< (ostream& out, Point& p)
    {
        out << p.x <<  endl;
        return out;
    }
int main()
{
    Point p;
    cout<<"Enter values: "<<endl;
    cin>>p;
    cout<<"Values are : "<<endl;
    cout<<p;
}