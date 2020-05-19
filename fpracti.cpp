#include<iostream>
using namespace std;
fun(double a)
{
	float c;
	c=2*3.14*a;
	cout<<"perimeter of circle:"<<c<<endl;
}
fun(int a,int b)
{
	int c;
	c=2*(a+b);
	cout<<"perimeter of rec:"<<c<<endl;
}
fun(int a)
{
	int c;
	c=4*a;
	cout<<"perimeter of square:"<<c<<endl;
}
fun(double a,double b)
{
	float c;
	c=2*3.14*a*b;
	cout<<"perimeter of cylinder"<<c<<endl;
}
int main()
{
	fun(2.2,3.5);
	fun(4.3);
	fun(2,3);
	fun(4);
	return 0;
}
