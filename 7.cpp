#include<iostream>
using namespace std;
class father
{
	protected:int age; 
	public:
		father(int x=90)
		{
			age=x;
		}
		virtual void iam()
		{
			cout<<"I AM THE FATHER, my age is:"<<age<<endl;
		}
};
class son:public father
{
	public:
    son(int y)
    {
    	age=y;
	}
     void iam()
	 {
	 	cout<<"I AM SON, my age is:"<<age<<endl;
	 }	
};
class daughter:public father
{
	public:
		daughter(int z)
		{
			age=z;		
		}
		void iam()
		{
			cout<<"I AM DAUGHTER, my age is:"<<age<<endl;
		}
};
int main()
{
	father *a;
	father f1(48);
	cout<<"CALLING IAM USING OBJECT"<<endl;
	f1.iam();
	son s(10);
	s.iam();
	daughter d(20);
	d.iam();
	cout<<"CALLING IAM USING POINTER"<<endl;
	a=&f1;
	a->iam();
	a=&s;
	a->iam();
	a=&d;
	a->iam();
	return 0;
}
