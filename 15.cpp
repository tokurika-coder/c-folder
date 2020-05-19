#include<iostream>
using namespace std;
class shape
{
	public:
		double x;
		double y;
        get_data()
		{
			cout<<"enter the value of x and y";
			cin>>x>>y;
		}		
		virtual display_area()
		{
			
		}
};
class triangle:public shape
{
	public:
		display_area()
		{
			double a;
			a=0.5*x*y;
			cout<<"area of triangle:"<<a<<endl;
		}
		
};
class rectangle:public shape
{
	public:
		display_area()
		{
			double b;
			b=x*y;
			cout<<"area of rectangle"<<b;
		}
};
int main()
{
	shape ob;
	ob.get_data();
	triangle t;
	t.x=ob.x;
	t.y=ob.y;
	t.display_area();
	rectangle r;
	r.x=ob.x;
	r.y=ob.y;
	r.display_area();
	return 0;
}

