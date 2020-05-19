#include<iostream>
using namespace std;
int main()
{
	int n,i,j,space;
	cout<<"enter the value of n:";
	cin>>n;
	char c='A',b,d='B';
	for(i=1;i<=n;i++)
	{
		for(space=1;space<=n-i;space++)
		{
			cout<<" ";
		}
		b=c;
		for(j=1;j<=i;j++)
		{
			cout<<b;
			b++;
		}
		b=b-2;
		for(j=1;j<=i-1;j++)
		{
			cout<<b;
			b--;
		}
		cout<<endl;
	}
	return 0;
}
