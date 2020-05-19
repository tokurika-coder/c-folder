#include<iostream>
#include<string.h>
using namespace std;
int main()
{
   char str[20],i=0;
   cout<<"enter a str";
   gets(str);
   int a=strlen(str);
   while(i<a)
   {  	
   	   if(str[i]>='a' && str[i]<='z')
   	   {
   	     str[i]=str[i]-32;
   	     cout<<str[i];
   }
   i++;
}
return 0;
}
