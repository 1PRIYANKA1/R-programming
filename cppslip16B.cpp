 Design two base classes Student(S_id,Name,Class) and Competition(C_id,C_Name).
Derive a class Stud_Comp(Rank) from it. Write a menu driven program to perform 
following functions:
Accept information.
i. Display information.
ii. Display Student Details in the ascending order of Rank of a specified competition.
(Use array of objects)

#include <iostream>
#include <string>
using namespace std;

class Student 
{
public:
    int S_id, Class;
    string Name;
    void accept() 
	{
        cout << "Enter student ID: ";
        cin >> S_id;
        cout << "Enter student name: ";
        cin >> Name;
        cout << "Enter student class: ";
        cin >> Class;
    }
    void display() 
	{
        cout << "Student ID: " << S_id << endl;
        cout << "Student Name: " << Name << endl;
        cout << "Student Class: " << Class << endl;
    }
};

class Competition 
{
public:
    int C_id;
    string C_Name;
    void accept() 
	{
        cout << "Enter competition ID: ";
        cin >> C_id;
        cout << "Enter competition name: ";
        cin >> C_Name;
    }
    void display() 
	{
        cout << "Competition ID: " << C_id << endl;
        cout << "Competition Name: " << C_Name << endl;
    }
};

class Stud_Comp : public Student, public Competition {
public:
    int Rank;
    void accept() 
	{
        Student::accept();
        Competition::accept();
        cout << "Enter student rank in the competition: ";
        cin >> Rank;
    }
    void display() 
	{
        Student::display();
        Competition::display();
        cout << "Rank in the competition: " << Rank << endl;
    }
    int getRank() 
	{
        return Rank;
    }
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;
    Stud_Comp *arr = new Stud_Comp[n];

    int c;
    do {
        cout << "\nMenu:\n1. Accept information\n2. Display information\n3. Display Student Details in the ascending order of Rank of a specified competition\n4. Exit\nEnter your choice: ";
        cin >> c;
        switch(c) {
            case 1:
                for (int i = 0; i < n; i++) {
                    cout << "\nStudent " << i+1 << endl;
                    arr[i].accept();
                }
                break;
            case 2:
                for (int i = 0; i < n; i++) {
                    cout << "\nStudent " << i+1 << endl;
                    arr[i].display();
                }
                break;
            case 3:
                int Cid;
                cout << "Enter competition ID to display student details in ascending order of rank: ";
                cin >> Cid;
                for (int i = 0; i < n; i++) {
                    if (arr[i].C_id == Cid) {
                        cout << "\nStudent " << i+1 << endl;
                        arr[i].display();
                    }
                }
                break;
            case 4:
                cout << "Exiting program...\n";
                break;
            default:
                cout << "Invalid choice, please try again.\n";
        }
    } while (c != 4);

    return 0;
}

