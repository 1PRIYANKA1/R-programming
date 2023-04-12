//Create a class College containing data members as College_Id, College_Name,
//Establishment_year, University_Name. Write a C++ program with following member 
//functions:
//i. To accept ‘n’ College details
//ii. To display College details of a specified University
//iii. To display College details according to a specified establishment year
//(Use Array of Object and Function overloading) 

#include <iostream>
#include <string>
using namespace std;

class College 
{
    private:
        int id, est_year;
        string uni_name, name;
    public:
        void input() 
		{
            cout << "Enter id: ";
            cin >> id;
            cout << "Enter name: ";
            cin >> name;
            cout << "Enter establishment year: ";
            cin >> est_year;
            cout << "Enter university name: ";
            cin >> uni_name;
        }
        void display() 
		{
            cout << "ID: " << id << endl;
            cout << "Name: " << name << endl;
            cout << "Establishment year: " << est_year << endl;
            cout << "University name: " << uni_name << endl;
        }
        string uni() 
		{
            return uni_name;
        }
        int est() 
		{
            return est_year;
        }
};

void display_by_university(College colleges[], int n, string uni_name) 
{
    for (int i = 0; i < n; i++) 
	{
        if (colleges[i].uni() == uni_name) 
		{
            colleges[i].display();
            cout << endl;
        }
    }
}

void display_by_establishment_year(College colleges[], int n, int est_year) 
{
    for (int i = 0; i < n; i++) 
	{
        if (colleges[i].est() == est_year) 
		{
            colleges[i].display();
            cout << endl;
        }
    }
}

int main() 
{
    int n;
    cout << "Enter the number of colleges: ";
    cin >> n;

    College colleges[n];
    for (int i = 0; i < n; i++) 
	{
        cout << "Enter details of college " << i+1 << ":\n";
        colleges[i].input();
    }

    string uni_name;
    cout << "Enter university name to display details: ";
    cin >> uni_name;
    display_by_university(colleges, n, uni_name);

    int est_year;
    cout << "Enter establishment year to display details: ";
    cin >> est_year;
    display_by_establishment_year(colleges, n, est_year);

    return 0;
}

