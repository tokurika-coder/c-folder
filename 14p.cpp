#include<iostream>
using namespace std;
#include<math.h>
class account
{
	public:
		char customer_name[20];
		int account_no;
		char account_type[20];
		account_detail()
		{
			cout<<"enter the customer name:";
			cin>>customer_name;
			cout<<"enter the account no:";
			cin>>account_no;
			cout<<"enter the account type:"<<endl;
		}
};
class cur_acct:public account
{
	public:
		 float balance;
		 current_balance()
		 {
	   	 cout<<"enter the current balance:";
	     cin>>balance;
	 }
		 deposit()
		{
			float money;
			cout<<"enter the money which you want to deposit:";
			cin>>money;
		}
			display()
		{
			float money;
			balance=money+balance;
			cout<<"the avialable baalance is:"<<balance<<endl;
		}
			withdrawl()
		{
			float money;
			cout<<"enter the money which you want to withdraw:";
			cin>>money;
			balance=balance-money;
		}
		service_charge()
		{
		cout<<"now balance is:"<<balance<<endl;		
			if(balance<500)
			{
				cout<<"service charge is imposed"<<endl;
			}
		}
		checkbook()
		{
			char ch;
			cout<<"do you want to issue the check book:(y/n)"<<endl;
			cin>>ch;
			if(ch=='y')
			{
				cout<<"check book is issued"<<endl;
			}
		}
};
class sav_acct:public account
{
	public:
		float balance;
		current_balance()
		{
		cout<<"enter the current balance"<<endl;
		cin>>balance;
	}
		deposit()
		{
			float money;
			cout<<"enter the money which you want to deposit:";
			cin>>money;
		}
		display()
		{
			float money;
			balance=money+balance;
			cout<<"the avialable baalance is:"<<balance<<endl;
		}
		interest()
		{
			float am;
			cout<<"rate is 2% for one year"<<endl;
			am=(1+(2/100));
			balance=(balance*(pow(am,1)));
			cout<<"balance after interest:"<<balance<<endl;
		}
		withdrawl()
		{
			float money;
			cout<<"enter the money which you want to withdraw:";
			cin>>money;
			balance=balance-money;
			cout<<"current balance is:"<<balance<<endl;
		}
};
int main()
{
	int i;
	account ob;
	ob.account_detail();
	sav_acct s;
	cur_acct c;
	cout<<"enter 1 for saving account and 2 for current account"<<endl;
	cin>>i;
	if(i==1)
	{
	s.current_balance();	
	s.deposit();
	s.display();
	s.interest();
	s.withdrawl();
	}
	else
	{
	c.current_balance();	
	c.deposit();
	c.display();
	c.withdrawl();
	c.service_charge();
	c.checkbook();
    }
	return 0;
}
