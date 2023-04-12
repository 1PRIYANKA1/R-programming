//Write a C++ program to create a class Date with data members day, month, and year. 
//Use default and parameterized constructor to initialize date and display date in 
//dd-Mon-yyyy format. (Example: Input: 04-01-2021Output:04-Jan-2021)	

#include <iostream>
#include <string>

using namespace std;

class Date 
{
public:
    Date() : day(0), month(0), year(0) {} // default constructor
    Date(int d, int m, int y) : day(d), month(m), year(y) {} // parameterized constructor
    void displayDate() { // display date in dd-Mon-yyyy format
        string monthNames[12] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
        cout << day << "-" << monthNames[month-1] << "-" << year << endl;
    }
private:
    int day, month, year;
};

int main() 
{
    int d, m, y;

    // accept input from user
    cout << "Enter date in dd-mm-yyyy format: ";
    cin >> d >> m >> y;

    // create a date object using input values
    Date d1(d, m, y);

    // display date in dd-Mon-yyyy format
    cout << "Date: ";
    d1.displayDate();

    return 0;
}

