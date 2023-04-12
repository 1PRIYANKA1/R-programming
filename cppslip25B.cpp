//Create a base class Travels with data members T_no, Company_Name. Derive a class 
//Route with data members Route_id, Source, and Destination from Travels class. Also 
//derive a class Reservation with data members Number_of_Seats, Travels_Class, Fare, and 
//Travel_Date from Route.
//Write a C++ program to perform following necessary member functions:
//i. Accept details of •n' reservations.
//ii. Display details of all reservations.
//iii.Display reservation details of a specified Date.

#include <iostream>
#include <string>

using namespace std;

// Base class Travels
class Travels 
{
protected:
    int T_no;
    string Company_Name;
public:
    void accept_travels_details() 
	{
        cout << "Enter Travels Number: ";
        cin >> T_no;
        cout << "Enter Company Name: ";
        cin >> Company_Name;
    }
};

// Derived class Route from Travels
class Route : public Travels 
{
protected:
    int Route_id;
    string Source;
    string Destination;
public:
    void accept_route_details() 
	{
        cout << "Enter Route ID: ";
        cin >> Route_id;
        cout << "Enter Source: ";
        cin >> Source;
        cout << "Enter Destination: ";
        cin >> Destination;
    }
};

// Derived class Reservation from Route
class Reservation : public Route 
{
private:
    int Number_of_Seats;
    string Travels_Class;
    float Fare;
    string Travel_Date;
public:
    void accept_reservation_details() 
	{
        cout << "Enter Number of Seats: ";
        cin >> Number_of_Seats;
        cout << "Enter Travels Class: ";
        cin >> Travels_Class;
        cout << "Enter Fare: ";
        cin >> Fare;
        cout << "Enter Travel Date: ";
        cin >> Travel_Date;
    }

    void display_reservation_details() 
	{
        cout << "Reservation Details" << endl;
        cout << "-------------------" << endl;
        cout << "Travels Number: " << T_no << endl;
        cout << "Company Name: " << Company_Name << endl;
        cout << "Route ID: " << Route_id << endl;
        cout << "Source: " << Source << endl;
        cout << "Destination: " << Destination << endl;
        cout << "Number of Seats: " << Number_of_Seats << endl;
        cout << "Travels Class: " << Travels_Class << endl;
        cout << "Fare: " << Fare << endl;
        cout << "Travel Date: " << Travel_Date << endl;
    }

    void display_reservation_by_date(string date) 
	{
        if (Travel_Date == date) 
		{
            display_reservation_details();
        }
    }
};

int main() 
{
    // Get number of reservations
    int n;
    cout << "Enter number of reservations: ";
    cin >> n;

    // Create array of Reservation objects
    Reservation reservations[n];

    // Accept details of n reservations
    for (int i = 0; i < n; i++) 
	{
        cout << "Reservation " << i + 1 << " Details:" << endl;
        reservations[i].accept_travels_details();
        reservations[i].accept_route_details();
        reservations[i].accept_reservation_details();
        cout << endl;
    }

    // Display details of all reservations
    for (int i = 0; i < n; i++) 
	{
        cout << "Reservation " << i + 1 << " Details:" << endl;
        reservations[i].display_reservation_details();
        cout << endl;
    }

    // Display reservation details of a specified Date
    string date;
    cout << "Enter Travel Date to Display Reservation Details: ";
    cin >> date;
    cout << endl;

    for (int i = 0; i < n; i++) 
	{
        reservations[i].display_reservation_by_date(date);
        cout << endl;
    }

    return 0;
}






