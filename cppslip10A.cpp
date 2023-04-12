//Write a C++ program to create a class Account with data members Acc_number, Acc_type 
//and Balance. Write member functions to accept and display ' n' account details. 
//(Use dynamic memory allocation)

#include <iostream>
#include <string>
using namespace std;

class Account 
{
public:
    void accept() 
	{
        cout << "Enter account number: "; // Prompt for account number
        cin >> Acc_number; // Accept account number from user
        cout << "Enter account type: "; // Prompt for account type
        cin >> Acc_type; // Accept account type from user
        cout << "Enter balance: "; // Prompt for account balance
        cin >> Balance; // Accept account balance from user
    }

    void display() 
	{
        cout << "Account number: " << Acc_number << endl; // Display account number
        cout << "Account type: " << Acc_type << endl; // Display account type
        cout << "Balance: " << Balance << endl; // Display account balance
    }

private:
    int Acc_number;
    string Acc_type;
    double Balance;
};

int main() 
{
    int n;

    cout << "Enter the number of accounts: ";
    cin >> n;

    Account *accounts = new Account[n];

    for (int i = 0; i < n; i++) 
	{
        cout << "Enter details for account " << i + 1 << ":" << endl;
        accounts[i].accept();
    }

    cout << "Details of all " << n << " accounts:" << endl;

    for (int i = 0; i < n; i++) 
	{
        cout << "Account " << i + 1 << ":" << endl;
        accounts[i].display();
        cout << endl;
    }

    delete[] accounts;

    return 0;
}

