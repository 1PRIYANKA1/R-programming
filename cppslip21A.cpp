// Create a C++ class MyString with data member character pointer. Write a C++ program to
//accept and display a string. Overload '+' operator to concatenate two strings

#include <iostream>
#include <string.h>
using namespace std;

class str{
	public:
		char st[10], sr[10];
		void accept()
		{
			cout<<"enter a string";
			cin>>st;
		}
		void display()
		{
			cout<<"string:"<<st;
		}
		void operator +()
		{
			cout<<"enter string 2";
			cin>>sr;
			strcat(st,sr);
			cout<<"new string:"<<st;
			}
};

int main()
{
	str s;
	s.accept();
	s.display();
	s.operator +();
}
