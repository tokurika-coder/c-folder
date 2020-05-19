#include<iostream>
using namespace std;
int main()
{
	int a,i;
	cout<<"enter a no";
	cin>>a;
	for(i=2;i<=a-1;i++)
	{
	   	if(a%i==0)
	   	{
	   	cout<<"not prime";
	   	break;
	   }
	}
	if(i==a)
	{
	   cout<<"prime no";
    }
	return 0;
} 
