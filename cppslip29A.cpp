//Write the definition for a class called ‘point’ that has x & y as integer data members. Use 
//copy constructor to copy one object to another. (Use Default and parameterized 
//constructor to initialize the appropriate objects) Write a C++ program to illustrate 
//the use of above class.

#include <iostream>
using namespace std;
class point 
{
    int x, y;

public:
    // Default constructor
    point() 
	{
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    point(int a, int b) 
	{
        x = a;
        y = b;
    }

    // Copy constructor
    point(const point& p) 
	{
        x = p.x;
        y = p.y;
    }

    // Member function to set the point values
    void setPoint(int a, int b) 
	{
        x = a;
        y = b;
    }
    
    // Member function to display the point
    void display() 
	{
        cout << "x = " << x << ", y = " << y << endl;
    }
};

int main() 
{
    int x, y;

    // Accepting values for point p1 from the user
    cout << "Enter x and y for p1: ";
    cin >> x >> y;
    point p1(x, y);

    // Accepting values for point p2 from the user
    cout << "Enter x and y for p2: ";
    cin >> x >> y;
    point p2(x, y);

    // Displaying the points
    p1.display();
    p2.display();

    // Copying object p2 to p3 using copy constructor
    point p3(p2);

    // Displaying the copied point
    cout << "p3 (copied from p2): ";
    p3.display();

    return 0;
}

