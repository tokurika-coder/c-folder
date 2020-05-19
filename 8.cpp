#include<iostream>
#include<fstream>
using namespace std;
class student
{
	int rollno,marks;
	char name[30];
	public:
		void getdata()
		{
			cout<<"\nenter rollno:";
			cin>>rollno;
			char ch=cin.get();
			cout<<"enter the name of student:";
			cin.getline(name,30);
			cout<<"enter marks:";
			cin>>marks;
		}
};
int main()
{ 
	int m;
	cout<<"number of students to be entered:";
	cin>>m;
	student stu[m];
	fstream fio;
	fio.open("student.txt",ios::binary|ios::out);
	for(int count=0;count<m;count++)
	{
		stu[count].getdata();
		fio.write((char*)&stu[count],sizeof(stu[count]));
	}
	fio.close();
	return 0;
}

