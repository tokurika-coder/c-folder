#include<iostream>
#include<math.h>
using namespace std;
double power(double n,int p=2)
{
	double c;
	c=pow(n,p);
	return c;
}
int main()
{
	double a,c;
	int b;
	cout<<"enter the value of a and b";
	cin>>a>>b;
	c=power(a,b);
    cout<<c<<endl;
	cout<<"number by default power:"<<endl;
	c=power(a);
	cout<<c;
	return 0;
}
