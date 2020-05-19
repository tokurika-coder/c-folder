#include<iostream>
using namespace std;
int main()
{
int fib(int);
	int i,n;
	cout<<"enter the length of series";
	cin>>n;
	for(i=0;i<n;i++)
	{
	cout<<fib(i);	
	}
	return 0;
}
int fib(int n)
{
	if(n==0)
	return(0);
	else if(n==1)
	return(1);
	else
	return(fib(n-1)+fib(n-2));
}
