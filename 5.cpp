#include<iostream>
using namespace std;
class DB;
class DM
{
 float m;
 float cm;
 public:
 read()
 {
    	cout<<"distance in m and cm";
    	cin>>m>>cm;
 }	
 friend fun(DM ob1,DB ob2);
 friend fun1(DM ob1,DB ob2);
};
class DB
{
	float feet;
	float inch;
	public:
	read()
	{
		cout<<"distance in feet and inch";
    	cin>>feet>>inch;
	}
	friend fun(DM ob1,DB ob2);
	friend fun1(DM ob1,DB ob2);
};
fun(DM ob1,DB ob2)
{
	DM c3;
	ob1.m=ob2.feet*0.305;
	ob1.cm=ob2.inch*2.54;
	c3.m=ob1.m+ob2.feet;
	c3.cm=ob1.cm+ob2.inch;
	cout<<"distance in m:"<<c3.m<<"\n"<<"distance in cm:"<<c3.cm;
}
fun1(DM ob1,DB ob2)
{
	DB c4;
	ob2.feet=ob1.m*3.05;
	ob2.inch=ob1.cm*2.54;
	c4.feet=ob1.m+ob2.feet;
	c4.inch=ob1.cm+ob2.inch;
	cout<<"distance in feet:"<<c4.feet<<"\n"<<"distance in inch:"<<c4.inch;
}
int main()
{
	DM c1,c3;
	DB c2,c4;
	c1.read();
	c2.read();
	int ch;
	cout<<"press 1 for display distance in m and cm:"<<endl;
	cout<<"press 2 for display distance in feet and inch:"<<endl;
	cin>>ch;
	if(ch==1)
	{
		fun(c1,c2);
	}
	else
	{
		fun1(c1,c2);
	}
	return 0;
}
