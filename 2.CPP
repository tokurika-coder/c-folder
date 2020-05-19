#include<iostream>
using namespace std;
struct point
{
	int x,y;
}a,b,c;
int main()
{
cout<<"enter the coordinate of first point";
cin>>a.x>>a.y;
cout<<"enter the coordinate of 2nd point";
cin>>b.x>>b.y;
c.x=a.x+b.x;
c.y=a.y+b.y;
cout<<"coordinate of third point are:";
cout<<c.x<<","<<c.y;
return 0;	
}
