#include<iostream>
using namespace std;
#include<conio.h>
int getintegeronly()
{
	int num=0,ch;
	do
	{
		ch=getch();
		if(ch>=48 && ch<=57)
		{
			cout<<ch;
			num=num*10+(ch-48);
		}
	    if(ch==13)
	    break;
	}while(1);
	return(num);
}
int main()
{
	int x=0;
	x=getintegeronly();
	return 0;
}

