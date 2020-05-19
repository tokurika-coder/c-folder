#include<iostream>
using namespace std;
int main()
{
	int a[10],n,shift,j,temp;
	cout<<"enter the size of array";
	cin>>n;
	cout<<"enter the elements of array:"<<endl;
	for(j=0;j<n;j++)
	cin>>a[j];
	char direction;
	cout<<"enter the direction in which you want to rotate(l or r)"<<endl;
	cin>>direction;
	cout<<"enter the no of shifting"<<endl;
	cin>>shift;
	if(direction=='l')
	{
		temp=a[0];
		while(shift)
		{
		for(j=0;j<n-1;j++)
		{
		    a[j]=a[j+1];	
		}
		a[n-1]=temp;
		shift--;
	}
	}
	else
	{
	temp=a[n-1];
	while(shift)
	{
	for(j=n-1;j>=1;j--)
		{
		    a[j]=a[j-1];	
		}
	a[0]=temp;
    shift--;
}
}
	cout<<"after rotation:"<<endl;
	for(j=0;j<n;j++)
	cout<<a[j]<<"\t";
	return 0;	
}
