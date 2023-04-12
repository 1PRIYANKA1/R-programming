//Create a C++ class Person with data members Person_name, Mobile_number, Age, City.  
//Write necessary member functions for the following:
//i.	Search the mobile number of given Person.
//ii.	Search the Person name of given mobile number.
//iii.	Search all person details of given city.
//(Use function overloading)

#include <iostream>
#include <string>
using namespace std;

class Person 
{
private:
    char person_name;
    string mobile_number;
    int age;
    char city;
public:
    Person() {}

    void accept() 
	{
        cout << "Enter name: ";
        cin >> person_name;
        cout << "Enter mobile number: ";
        cin >> mobile_number;
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter city: ";
        cin >> city;
    }

    void display() 
	{
        cout << "Name: " << person_name << endl;
        cout << "Mobile Number: " << mobile_number << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
        cout << endl;
    }

    // Search the mobile number of given Person.
    void search_number(char name) 
	{
        if (person_name == name) 
		{
            cout << "Mobile Number: " << mobile_number << endl;
        }
        else 
		{
            cout << "No match found." << endl;
        }
    }

    // Search the Person name of given mobile number.
    void search_name(string number) 
	{
        if (mobile_number == number) 
		{
            cout << "Name: " << person_name << endl;
        }
        else 
		{
            cout << "No match found." << endl;
        }
    }

    // Search all person details of given city.
    void search_city(char person_city) 
	{
        if (city == person_city) 
		{
            cout << "Name: " << person_name << endl;
            cout << "Mobile Number: " << mobile_number << endl;
            cout << "Age: " << age << endl;
            cout << "City: " << city << endl;
            cout << endl;
        }
    }
};

int main() 
{
    int n;
    cout << "Enter the number of people: ";
    cin >> n;

    Person people[n];

    // Get input and display details for each Person object using a for loop.
    for (int i = 0; i < n; i++) 
	{
        cout << "Enter the details of person " << i+1 << endl;
        people[i].accept();
        people[i].display();
    }

    return 0;
}

