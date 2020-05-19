#include<iostream>
using namespace std;
struct phone
{
	long int a;
	long int b;
	long int c;
}x,y;
int main()
{
	cout<<"enter your area code,exchange, and number:";
	cin>>x.a>>x.b>>x.c;
	y.a=212;
	y.b=767;
	y.c=8900;
	cout<<"my number is:";
    cout<<"("<<y.a<<")"<<" "<<y.b<<"-"<<y.c<<endl;
    cout<<"your number is:";
	cout<<"("<<x.a<<")"<<" "<<x.b<<"-"<<x.c;
	return 0;	
}
