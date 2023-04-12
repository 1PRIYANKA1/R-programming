//Create a C++ class for a two dimensional points. Write necessary member functions to 
//accept &display the point object. Overload the following operators:
//Operator Example Purpose
//+ (Binary) P3=P l+P2 Adds coordinates of point pl and p2.
//- (Unary) -Pl Negates coordinates of point pl.
//*(Binary) P2=P l*n Multiply coordinates of point pl by constant 'n'.
 

#include <iostream>
using namespace std;
class Point 
{
    private:
        int x;
        int y;
    public:
        void input() 
		{
            cout << "Enter x-coordinate: ";
            cin >> x;
            cout << "Enter y-coordinate: ";
            cin >> y;
        }
        void display() 
		{
            cout << "Point: (" << x << "," << y << ")\n";
        }
        Point operator+ (Point p) 
		{
            Point temp;
            temp.x = x + p.x;
            temp.y = y + p.y;
            return temp;
        }
        Point operator- () 
		{
            Point temp;
            temp.x = -x;
            temp.y = -y;
            return temp;
        }
        Point operator* (Point p) 
		{
            Point temp;
            temp.x = x * p.x;
            temp.y = y * p.y;
            return temp;
        }
};

int main() 
{
    Point p1, p2, p3;

    cout << "Enter first point:\n";
    p1.input();

    cout << "Enter second point:\n";
    p2.input();

    p3 = p1 + p2;
    cout << "Sum of two points:\n";
    p3.display();

    p3 = -p1;
    cout << "Negation of first point:\n";
    p3.display();

    p3 = p1 * p2;
    cout << "Product of two points:\n";
    p3.display();

    return 0;
}

