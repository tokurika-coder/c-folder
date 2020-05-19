#include<iostream>
using namespace std;
int main()
{
	char ch;
	do
	{
	float a,b,c;
	char d;
	cout<<"enter first number:";
	cin>>a;
	cout<<"enter the operator:";
	cin>>d;
	cout<<"enter 2nd number:";
	cin>>b;
	switch(d)
	{
		case('+'):
			c=a+b;
			cout<<c;
			break;
		case('-'):
		    c=a-b;
			cout<<c;
			break;
		case('*'):
		     c=a*b;
			 cout<<c;
			 break;
		case('/'):
		     c=a/b;
			 cout<<c;
			 break;	 		
	}
	cout<<"\n"<<"do you want to perform another operation(y/n)";
	cin>>ch;
}while(ch=='y');
return 0;
}
