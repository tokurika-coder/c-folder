#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char str[10];
	int i,temp;
	cout<<"enter a string"<<"\n";
	gets(str);
	int a=strlen(str);
	for(i=0;i<a;i++)
	{
		temp=str[i];
		str[i]=str[a-1];
		str[a-1]=temp;
		a--;
	}
	cout<<str;
	return 0;
}
