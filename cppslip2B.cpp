//Create two base classes Learning_Info (Roll_No, Stud_Name, Class, Percentage) 
//and Earning_Info (No_of_hours_worked, Charges_per_hour). Derive a class 
//Earn_Learn_info from above two classes. Write necessary member functions to accept 
//and display Student information. Calculate total money earned by the student. 
//(Use constructor in derived class)		         								         [20]

#include <iostream>
using namespace std;

// Base class Learning_Info
class Learning_Info 
{
    protected:
        int roll_no;
        string stud_name;
        int stud_class;
        float percentage;

    public:
        // Function to accept student information
        void accept() 
		{
            cout << "Enter Roll No: ";
            cin >> roll_no;
            cout << "Enter Student Name: ";
            cin >> stud_name;
            cout << "Enter Class: ";
            cin >> stud_class;
            cout << "Enter Percentage: ";
            cin >> percentage;
        }

        // Function to display student information
        void display() 
		{
            cout << "\nRoll No: " << roll_no;
            cout << "\nStudent Name: " << stud_name;
            cout << "\nClass: " << stud_class;
            cout << "\nPercentage: " << percentage;
        }
};

// Base class Earning_Info
class Earning_Info 
{
    protected:
        int hours_worked;
        int charges_per_hour;

    public:
        // Function to accept earning information
        void accept() 
		{
            cout << "Enter No. of Hours Worked: ";
            cin >> hours_worked;
            cout << "Enter Charges per Hour: ";
            cin >> charges_per_hour;
        }

        // Function to display earning information
        void display() {
            cout << "\nNo. of Hours Worked: " << hours_worked;
            cout << "\nCharges per Hour: " << charges_per_hour;
        }

        // Function to calculate total money earned
        int total_earning() {
            return hours_worked * charges_per_hour;
        }
};

// Derived class Earn_Learn_info from Learning_Info and Earning_Info
class Earn_Learn_info : public Learning_Info, public Earning_Info {
    public:
        // Constructor to accept student and earning information
        Earn_Learn_info() {
            Learning_Info::accept();
            Earning_Info::accept();
        }

        // Function to display student and earning information
        void display() {
            Learning_Info::display();
            Earning_Info::display();
            cout << "\nTotal Earning: " << total_earning() << endl;
        }
};

// Main function
int main() {
    // Create object of Earn_Learn_info class
    Earn_Learn_info student;

    // Display student information
    student.display();

    return 0;
}
