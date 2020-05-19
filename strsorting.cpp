#include<iostream>
using namespace std;
#include<string.h>
int main()
{
	char str[20][20],i,a,s[20],round,c;
	cout<<"enter 5 string"<<endl;
	for(i=0;i<5;i++)
	gets(str[i]);
	cout<<"string in dictionary order is:";
	for(round=1;round<=4;round++)
	{
		for(i=0;i<=4-round;i++)
		{
		c=strcmp(str[i],str[i+1]);
		if(c>0)
		{
			strcpy(s,str[i]);
			strcpy(str[i],str[i+1]);
			strcpy(str[i+1],s);
		}
	}
	}
	for(i=0;i<5;i++)
	puts(str[i]);
	return 0;
}
