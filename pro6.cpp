#include<iostream>
using namespace std;
class rational
{
	public:
	double numerator;
	double denominator;
		rational()
		{
			numerator=0;
			denominator=0;
		};
		rational(double x,double y)
		{
			numerator=x;
			denominator=y;
		}
	void reduce(int x,int y)
	{
		int hcf;
		if(x%y==0)
		{
			hcf=y;
			cout<<"hcf is:"<<y<<endl;
		}
		else
		reduce(y,(x%y));
	}
	operator+(rational z)
	{
		numerator=z.numerator+numerator;
		denominator=z.denominator+denominator;
	}
	friend istream &operator>>(istream &mycin,rational &r);
	friend ostream &operator<<(ostream &mycout,rational &r);
};
istream &operator>>(istream &mycin,rational &r)
{
	cout<<"enter the value of rational number";
	mycin>>r.numerator>>r.denominator;
	return mycin;
}
ostream &operator<<(ostream &mycout,rational &r)
{
	cout<<"addition of two rational numbers:";
	mycout<<r.numerator<<"/"<<r.denominator;
	return mycout;
}
int main()
{
	int x,y;
	cout<<"enter two values of x and y";
	cin>>x>>y;
	rational ob,ob1,ob2,ob3;
	ob.reduce(x,y);
    cin>>ob1;
    cin>>ob2;
	ob1+ob2;
	cout<<ob1;
	return 0;
}
