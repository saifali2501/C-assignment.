#include<iostream>
using namespace std;

class book
{
   string author,title,publisher;
   int price;
   
   public:
   void assign()
   {
   	  cout<<"Enter the Name of Author:- ";
   	  cin>>author;
   	  cout<<"Enter the Name of Title:- ";
   	  cin>>title;
   	  cout<<"Enter the Name of Publisher:- ";
   	  cin>>publisher;
   	  cout<<"Enter the price of Book:- ";
   	  cin>>price;
   }
   void display()
   {
   	cout<<"Author Name is "<<author<<endl;
   	cout<<"Book Title is "<<title<<endl;
   	cout<<"Publisher Name is "<<publisher<<endl;
   	cout<<"Book Price is "<<price<<endl;
   }	
};
int main()
{
	book obj;
	obj.assign();
	obj.display();
	return 0;
}
