//Create a C++ class Employee with data members Emp_id, Emp_Name, 
//Company_Nameand Salary. Write member functions to accept and display Employee 
//information. Design User defined Manipulator to print Salary.
//(For Salary set right justification, maximum width to 7 and fill remaining spaces with*)

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

class Employee 
{
    private:
        int Emp_id, Salary;
        string Emp_Name, Company_Name;
    public:
        void AcceptData() 
		{
            cout << "Enter Employee ID: ";
            cin >> Emp_id;
            cout << "Enter Employee Name: ";
            cin >> Emp_Name;
            cout << "Enter Company Name: ";
            cin >> Company_Name;
            cout << "Enter Salary: ";
            cin >> Salary;
        }
        void DisplayData() 
		{
            cout << "Employee ID: " << Emp_id << endl;
            cout << "Employee Name: " << Emp_Name << endl;
            cout << "Company Name: " << Company_Name << endl;
            cout << "Salary: " << setfill('*') << setw(7) << right << Salary << endl;
        }
};

int main() 
{
    Employee emp1;

    cout << "Enter Employee details:" << endl;
    emp1.AcceptData();

    cout << "\nEmployee details:" << endl;
    emp1.DisplayData();

    return 0;
}

