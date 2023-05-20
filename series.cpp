#include<iostream>
using namespace std;

class series
{
	
		int n1=0,n2=1,n3,i,num;
		int a,f=1,number;
		public:
		void fibonacci();
		void factorial();
	
		
}; 
void series::fibonacci()
{
		
			cout<<"Enter the number of element:- ";
			cin>>num;
			cout<<n1<<n2;
			for(i=2;i<num;i++)
			{
				n3=n1+n2;
				cout<<n3;
				n1=n2;
				n2=n3;
				
				
			}
			
		
}
void series::factorial()
{
	cout<<"\nEnter the number: ";
	cin>>number;
	for(a=1;a<=number;a++)
	f=f*a;
	cout<<endl<<"The Factorial of is: "<<f;

}

int main()
{
	series a;
	a.fibonacci();
	a.factorial();

}
