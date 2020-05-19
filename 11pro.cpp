#include<iostream>
using namespace std;
class tollboth
{
	public:
		unsigned int no_of_cars;
		double money;
		tollboth()
		{
			no_of_cars=0;
			money=0;
		}
		paying_car()
		{
			no_of_cars++;
			money=money+0.50;
		}
		nonpaying_car()
		{
			no_of_cars++;
		}
		void display()
		{
			cout<<"totla cars:"<<no_of_cars<<endl;
			cout<<"money:"<<money<<endl;
		}
};
int main()
{
	tollboth ob;
	char choice;
	do{
		int ch;
		cout<<"enter 1 for paying car and 2 for non paying car";
		cin>>ch;
		if(ch==1)
		{
			ob.paying_car();
		}
		else
		ob.nonpaying_car();
		cout<<"enter y for taking cars"<<endl;
		cin>>choice;
	}
	while(choice=='y');
	char key;
	cout<<"enter escape key for display total cars and money"<<endl;
	cin>>key;
	if(key=='e')
	{
		ob.display();
		cout<<"enter y for exit:";
	}
	return 0;
}
