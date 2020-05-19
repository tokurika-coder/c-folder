#include<iostream>
using namespace std;
int main()
{
	int i,r;
	cout<<"all armstrong no under 1000";
	for(i=0;i<1000;i++)
	{
		int sum=0;
		int x=i;
		while(x!=0)
		{
		r=x%10;
		sum=sum+r*r*r;
		x=x/10;
     	}
	if(sum==i)
	{
		cout<<i<<"\t";
	}
	}
	return 0;
}
