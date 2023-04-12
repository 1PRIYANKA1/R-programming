//Create a base class Account (Acc_Holder_Name, Acc_Holder_Contact_No). 
//Derive a two classes as Saving_Account(S_Acc_No., Balance) and Current_Account
//( C_Acc_No., Balance) from Account. Write a C++ menu driven program to perform 
//following functions:
//i.	Accept the details for 'n' account holders.
//ii.	Display the details of 'n' account holders by adding interest amount where interest rate for Saving account is 5% of balance and interest rate for Current account is 1.5% of   balance. 		

#include <iostream>
#include <string>
using namespace std;
class Account 
{
protected:
    string hname;
    long int hcno;
public:
    void accept() 
	{
        cout << "Enter Account Holder Name: ";
        cin >> hname;
        cout << "Enter Account Holder Contact Number: ";
        cin >> hcno;
    }
    void display() 
	{
        cout << "Account Holder Name: " << hname << endl;
        cout << "Account Holder Contact Number: " << hcno << endl;
    }
};

class Saving_Account : public Account 
{
private:
    int S_Acc_No;
    double Balance;
public:
    void accept() 
	{
        Account::accept();
        cout << "Enter Saving Account Number: ";
        cin >> S_Acc_No;
        cout << "Enter Balance: ";
        cin >> Balance;
    }
    void display() 
	{
        Account::display();
        cout << "Saving Account Number: " << S_Acc_No << endl;
        cout << "Balance: " << Balance << endl;
        cout << "Interest Amount: " << Balance * 0.05 << endl;
    }
};

class Current_Account : public Account 
{
private:
    int C_Acc_No;
    double Balance;
public:
    void accept() 
	{
        Account::accept();
        cout << "Enter Current Account Number: ";
        cin >> C_Acc_No;
        cout << "Enter Balance: ";
        cin >> Balance;
    }
    void display() 
	{
        Account::display();
        cout << "Current Account Number: " << C_Acc_No << endl;
        cout << "Balance: " << Balance << endl;
        cout << "Interest Amount: " << Balance * 0.015 << endl;
    }
};

int main() 
{
    int n, choice;
    cout << "Enter the number of account holders: ";
    cin >> n;

    Saving_Account*S=new Saving_Account[n];
    Current_Account*C=new Current_Account[n];

    for (int i = 0; i < n; i++) 
	{
        cout << "Enter the details for Saving Account Holder " << i+1 << ":" << endl;
        S[i].accept();
        cout << "Enter the details for Current Account Holder " << i+1 << ":" << endl;
        C[i].accept();
    }

    cout << "Press 1 to display Saving Account details" << endl;
    cout << "Press 2 to display Current Account details" << endl;
    cout << "Enter your choice: ";
    cin >> choice;

    switch(choice) 
	{
        case 1:
            for (int i = 0; i < n; i++) 
			{
                cout << "Details of Saving Account Holder " << i+1 << ":" << endl;
                S[i].display();
                cout << endl;
            }
            break;
        case 2:
            for (int i = 0; i < n; i++) 
			{
                cout << "Details of Current Account Holder " << i+1 << ":" << endl;
                C[i].display();
                cout << endl;
            }
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
    delete[]S;
    delete[]C;
    return 0;
}
