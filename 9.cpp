#include<iostream>
using namespace std;
		struct dd
		{
			int year;
			int month;
			int date;
		}s;
class info
{
	public:
		char name[10];
		dd date;
		char disease[20];
		dd dod;
	     void getdata()
	     {
	     	cout<<"enter the information\n 1.name\n2.date(yy/mm/dd)\n3.disease\n4.date of discharge(yy/mm/dd)";
	     	cin>>name>>date.year>>date.month>>date.date>>disease>>dod.year>>dod.month>>dod.date;
		 }
		 void display()
		 {
		 	cout<<"patient name:"<<name<<"\n"<<"date of addmission:"
			 <<date.year<<"/"<<date.month<<"/"<<date.date<<"\n";
	        cout<<"disaese:"<<disease<<"\n"<<"date of discharge:"
			<<dod.year<<dod.month<<dod.date;
		} 
};
class ag:public info
{
 public:
 int age;
 void getdata()
 {
 	cout<<"enter the age of patient";
 	cin>>age;
 }
 void display(info m)
 {
 if(age<12)
 {
   m.display();
   cout<<"\n"<<"age"<<age<<endl;	
 }
  else
  {
  		cout<<"AGE LESS THAN 12"<<endl;	
  }
}
};
int main()
{
	info x,y,z;
	ag a,b,c;
	x.getdata();
	a.getdata();
	y.getdata();
	b.getdata();
	z.getdata();
	c.getdata();
	a.display(x);
	b.display(y);
	c.display(z);
	return 0;
	}
