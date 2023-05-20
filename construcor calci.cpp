#include<iostream>
using namespace std;

class calculator
{
	public:
		int a,b;
		calculator()
		{
			cout<<"Enter the value of a:-";
			cin>>a;
			cout<<"Enter the value of b:-";
			cin>>b;
		}
			
			void calsi()
			{
			
			cout<<endl<<"addition is:- "<<a+b<<endl<<endl;
			
			cout<<"subtraction is:- "<<a-b<<endl<<endl;
			
			cout<<"multplication is:- "<<a*b<<endl<<endl;
			
			cout<<"division is:- "<<a/b<<endl<<endl;
		    }
		
};
int main()
{
	calculator obj;
	obj.calsi();
	return 0;
}
