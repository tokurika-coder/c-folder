#include<iostream>
using namespace std;
int main()
{
	int a,b,i,j;
	cout<<"enter two no";
	cin>>a>>b;
	cout<<"prime no between"<<a<<"and"<<b<<endl;
	for(j=a+1;j<b;j++)
	{
	    for(i=2;i<=j-1;i++)
	    {
	         	if(j%i==0)
	         	{
	         		break;
				 }
    	}
    	if(j==i)
    	{
            cout<<j<<endl;
        }
    }
    return 0;
}
