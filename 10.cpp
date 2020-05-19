#include<iostream>
using namespace std;
class Employee
{
	public:
		string name;
		float salary;
};
class Manager:public Employee
{
	public:
	string department;
	stringm()
	{
		cout<<"manager's name:";
		cin>>name;
		cout<<"department:";
		cin>>department;
		cout<<"salary:";
		cin>>salary;
	}
};
class Executive:public Manager
{
	public:
	stringf()
	{cout<<"Executive"<<endl;
}
};
int main()
{
	Executive ob;
	ob.stringf();
	ob.stringm();
	return 0;
}

