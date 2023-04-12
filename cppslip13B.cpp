//Create a C++ class MyString with data members a character pointer and str_length. 
//(Use new and delete operator). Write a C++ program using operator overloading to 
//perform following operation:
//i. ! To reverse the case of each alphabet from a given string.
//ii. < To compare length of t\:vo strings.
//iii. To add constant 'n' to each alphabet of a string.

#include<string.h>
#include<iostream>
using namespace std;
class mystring{
	public:
		int strlen;
		char str[30];
		mystring()
		{
			cout<<"enter a string: ";
			cin>>str;
		}
		void operator !()
		{
			string rev;
			rev=strrev(str);
			cout<<str;
		}
		void operator<(mystring s3)
		{
			int n=strcmp(str,s3.str);
			cout<<"\n"<<n;
		}
};

int main()
{
	mystring s1, s2;
	s1.operator !();
	s1.operator <(s2);
}
