#include<iostream>
using namespace std;
int main()
{
	int a,i;
	cout<<"enter a no";
	cin>>a;
	cout<<"prime factors are"<<endl;
	for(i=2;a>1;i++)
	{
		while(a%i==0)
		{
		cout<<i<<"\t";
		a=a/i;
	    }
	}
	return 0;
}
