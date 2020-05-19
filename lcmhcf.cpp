#include<iostream>
using namespace std;
int main()
{
	int a,b,c,i=1;
	cout<<"enter two no";
	cin>>a>>b;
	c=a*b;
	while(i<=c)
	{
		if(i%a==0 && i%b==0)
		{
			cout<<"lcm is"<<i<<"\n";
			int hcf=c/i;
			cout<<"hcf is"<<hcf;
			break;
		}
		i++;
	}
	return 0;
}
