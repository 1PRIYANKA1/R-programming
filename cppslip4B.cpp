////B)	Write a C++ program to create a base class Employee (Emp-code, name, salary). 
////Derive two classes as Fulltime (daily_wages, num ber_of_days) and Parttime 
////(number_of_working_hours, hourly_wages). Write a menu driven program to perform 
////following functions:
////1.	Accept the details of 'n' employees and calculate the salary.
////2.	Display the details of ' n' employees.
////3.	Display the details of employee having maximum salary for both types of employees.
//

#include <iostream>
#include <string>

using namespace std;

class Employee {
protected:
    int empcode;
    string empname;
    float salary;
public:
    void get() {
        cout << "\nEnter Employee Code: ";
        cin >> empcode;
        cout << "Enter Employee Name: ";
        cin >> empname;
        cout << "Enter Salary: ";
        cin >> salary;
    }
    void display() {
        cout << "\nEmployee Code: " << empcode << "\nEmployee Name: " << empname << "\nSalary: " << salary << endl;
    }
    float getSalary() const {
        return salary;
    }
};

class Fulltime: public Employee {
private:
    int no_of_days, daily_wages;
public:
    void getdata() {
        cout << "\nEnter number of days worked: ";
        cin >> no_of_days;
        cout << "Enter daily wages: ";
        cin >> daily_wages;
    }
    void calculateSalary() {
        salary = no_of_days * daily_wages;
    }
};

class Parttime: public Employee {
private:
    int number_of_working_hours, hourly_wages;
public:
    void getdata() {
        cout << "\nEnter hourly rate: ";
        cin >> hourly_wages;
        cout << "Enter working hours: ";
        cin >> number_of_working_hours;
    }
    void calculateSalary() {
        salary = hourly_wages * number_of_working_hours;
    }
};

int main() {
    int n, choice;
    float max_fulltime_salary = 0, max_parttime_salary = 0;
    int max_fulltime_emp_index = -1, max_parttime_emp_index = -1;
    cout << "Enter number of employees: ";
    cin >> n;
    Fulltime ft[n];
    Parttime pt[n];
    while (true) {
        cout << "\n\n********** MENU **********\n";
        cout << "1. Enter details of Fulltime employees\n";
        cout << "2. Enter details of Parttime employees\n";
        cout << "3. Display details of all employees\n";
        cout << "4. Display details of Fulltime employee with highest salary\n";
        cout << "5. Display details of Parttime employee with highest salary\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "\n\nEnter details of Fulltime employees\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter details of Employee " << i+1 << endl;
                    ft[i].get();
                    ft[i].getdata();
                    ft[i].calculateSalary();
                }
                break;
            case 2:
                cout << "\n\nEnter details of Parttime employees\n";
                for (int i = 0; i < n; i++) {
                    cout << "\nEnter details of Employee " << i+1 << endl;
                    pt[i].get();
                    pt[i].getdata();
                    pt[i].calculateSalary();
                }
                break;
                case 3:
        cout << "\n\n********** EMPLOYEE DETAILS **********\n";
        cout << "\nFULLTIME EMPLOYEES\n";
        for (int i = 0; i < n; i++) {
            cout << "\nEmployee " << i + 1 << endl;
            ft[i].display();
        }
        cout << "\nPARTTIME EMPLOYEES\n";
        for (int i = 0; i < n; i++) {
            cout << "\nEmployee " << i + 1 << endl;
            pt[i].display();
        }
        break;
    case 4:
        max_fulltime_salary = 0;
        max_fulltime_emp_index = -1;
        for (int i = 0; i < n; i++) {
            if (ft[i].getSalary() > max_fulltime_salary) {
                max_fulltime_salary = ft[i].getSalary();
                max_fulltime_emp_index = i;
            }
        }
        if (max_fulltime_emp_index == -1) {
            cout << "\nNo Fulltime employees found.\n";
        }
        else {
            cout << "\nFULLTIME EMPLOYEE WITH HIGHEST SALARY\n";
            cout << "\nEmployee " << max_fulltime_emp_index + 1 << endl;
            ft[max_fulltime_emp_index].display();
        }
        break;
    case 5:
        max_parttime_salary = 0;
        max_parttime_emp_index = -1;
        for (int i = 0; i < n; i++) {
            if (pt[i].getSalary() > max_parttime_salary) {
                max_parttime_salary = pt[i].getSalary();
                max_parttime_emp_index = i;
            }
        }
        if (max_parttime_emp_index == -1) {
            cout << "\nNo Parttime employees found.\n";
        }
        else {
            cout << "\nPARTTIME EMPLOYEE WITH HIGHEST SALARY\n";
            cout << "\nEmployee " << max_parttime_emp_index + 1 << endl;
            pt[max_parttime_emp_index].display();
        }
        break;
    case 6:
    	cout<<"exit";
        break;
    default:
        cout << "\nInvalid choice!\n";
        break;
    }
}
return 0;
}



