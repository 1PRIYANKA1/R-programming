//Create a C++ class Student with data members Roll_no, S_Name, Class, Percentage. 
//Accept two students information and display information of student having maximum 
//percentage. (Use this pointer)

#include <iostream>
#include <string>

using namespace std;

class Student 
{
public:
    int roll_no, cls;
    string name;
    float percentage;

    void accept() 
	{
        cout << "Enter student roll number: ";
        cin >> roll_no;
        cout << "Enter student name: ";
        cin >> name;
        cout << "Enter student class: ";
        cin >> cls;
        cout << "Enter student percentage: ";
        cin >> percentage;
    }

    void display() 
	{
        cout << "Roll Number: " << roll_no << endl;
        cout << "Name: " << name << endl;
        cout << "Class: " << cls << endl;
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

int main() 
{
    Student s1, s2;

    cout << "Enter information for student 1: " << endl;
    s1.accept();

    cout << "Enter information for student 2: " << endl;
    s2.accept();

    if (s1.percentage > s2.percentage) 
	{
        cout << "Student 1 has the maximum percentage." << endl;
        s1.display();
    } else 
	{
        cout << "Student 2 has the maximum percentage." << endl;
        s2.display();
    }

    return 0;
}

