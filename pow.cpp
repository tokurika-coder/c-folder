#include<iostream>
using namespace std;
int main()
{
	int x,c;
	cout<<"enter a no";
	cin>>x;
	cout<<"enter the power";
	cin>>c;
	int p=1;
	while(c>0)
	{
    p=p*x;
	c--;
	}
    cout<<p;                                                                                                                                                                                                                                                                                                              
	return 0;
}
