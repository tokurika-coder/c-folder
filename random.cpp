#include<iostream>
using namespace std;
#include<stdlib.h>
#include<time.h>
int main()
{
	int a[10],i,j,temp,min=10,max=19;
	cout<<"random no are:";
	srand(time(NULL));
	for(i=0;i<10;i++)
	{
		temp=rand()%10;
		for(j=0;j<i-1;j++)
		{
	         if(temp==a[j])
	         break;
	    }
	    if(temp!=a[j])
	    a[i]=temp;
	    else
	    i--;
	}
	for(i=0;i<10;i++)
	cout<<a[i]<<"\t";
	return 0;
}
