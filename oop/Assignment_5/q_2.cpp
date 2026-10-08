/*WAP to define a class BOOK having members as title, author_name, no_of_pages, and price. Add member functions to enter the details of a book and display them. Create two objects of BOOK class and display the details */

#include<iostream>
using namespace std;

class Book
{
	char title[20],author_name[20];
	int pages,price;
	public:
	void setvalue();
	void printvalue();
};
	void Book:: setvalue()
	{
		cout<<"Enter title of the book :";
		cin>>title;
		cout<<"Enter number of pages:";
                cin>>pages;
		cout<<"Enter author name of the book:";
		cin>>author_name;
	//	cout<<"Enter number of pages:";
	//	cin>>pages;
		cout<<"Enter price of the book:";
		cin>>price;
	}
	
	void Book::printvalue()
	{
	 cout<<" Title of the book :"<<title<<"\n";
         cout<<" Author name of the book:"<<author_name<<"\n";
         cout<<" Number of pages:"<<pages<<"\n";
         cout<<" Price of the book:"<<price<<"\n";

	}


int main()
{
  class Book B1,B2;

  B1.setvalue();
  B1.printvalue();
  B2.setvalue();
  B2.printvalue();

}


