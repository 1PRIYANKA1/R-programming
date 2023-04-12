//Write a C++ program to accept Worker information Worker_Name, No_of_Hours_worked, 
//Pay_ Rate and Salary. Write necessary functions to calculate and display the salary 
//of Worker. (Use default value for Pay_Rate)

#include <iostream>
using namespace std;

class Worker {
    char name[10];
    int hours_worked;
    float pay_rate;

public:
    void accept() {
        cout << "Enter name: ";
        cin >> name;
        cout << "Enter hours worked: ";
        cin >> hours_worked;
        cout << "Enter pay rate: ";
        cin >> pay_rate;
    }

    void calculate() {
        float salary = hours_worked * pay_rate;
        cout << "Salary of worker " << name << " is Rs. " << salary << endl;
    }
};

int main() {
    Worker ob;
    ob.accept();
    ob.calculate();
    return 0;
}

