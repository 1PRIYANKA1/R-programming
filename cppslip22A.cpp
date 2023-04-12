//Create a C++ class FixDeposit with data members FD_No, Cust_Name, FD_Amt, 
//Interestrate, Maturity amt, Number_of_months. Create and Initialize all values of 
//FixDeposit object by using parameterized constructor with default value for interest rate. 
//Calculate maturity amt using interest rate and display all the details.

#include <iostream>
#include <string>
using namespace std;

class FixDeposit 
{
private:
    int FD_No;
    string Cust_Name;
    double FD_Amt, Interestrate, Maturity_amt;
    int Number_of_months;

public:
    FixDeposit() {}

    void accept() 
    {
        cout << "Enter FD No: ";
        cin >> FD_No;
        cout << "Enter Customer Name: ";
        cin >> Cust_Name;
        cout << "Enter FD Amount: ";
        cin >> FD_Amt;
        cout << "Enter Number of Months: ";
        cin >> Number_of_months;
        cout << "Enter Interest Rate (in %): ";
        cin >> Interestrate;
        Maturity_amt = FD_Amt + (FD_Amt * Interestrate * Number_of_months) / (12 * 100);
    }

    void display() 
    {
        cout << "FD No: " << FD_No << endl;
        cout << "Name: " << Cust_Name << endl;
        cout << "FD Amount: " << FD_Amt << endl;
        cout << "Interest Rate: " << Interestrate << "%" << endl;
        cout << "Months: " << Number_of_months << endl;
        cout << "Maturity Amt: " << Maturity_amt << endl;
    }
};

int main() 
{
    FixDeposit fd;
    fd.accept();
    fd.display();
    return 0;
}

