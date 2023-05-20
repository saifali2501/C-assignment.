#include<iostream>
using namespace std;

class details
{
   string l,s,c;
   int num;
   public:
   	
   	void assign()
   	{
   	  cout<<"Enter the name of lecturer: ";
   	  cin>>l;
		 	cout<<"Enter the name of subject: ";
		 	cin>>s;
		 	cout<<"Enter the name of course: ";
		 	cin>>c;
		 	cout<<"Enter the number of lecturers: ";
		 	cin>>num;
	}
	void display()
	{
		cout<<"========================="<<endl;
		cout<<"lecturer name is: "<<l<<endl;
		cout<<"subject name is: "<<s<<endl;
		cout<<"course name is: "<<c<<endl;
		cout<<"lecterer number is: "<<num<<endl;
	}
   	
};
int main()
{
	details obj;
	obj.assign();
	obj.display();
}
