//Create a base class Shape. Derive three different classes Circle, Rectangle and 
//Triangle from Shape class. Write a C++ program to calculate area of Circle, 
//Rectangle and Triangle. (Use pure virtual function). 

#include<iostream>
using namespace std;
class shape 
{
    public:
        virtual void area() = 0; // pure virtual function
};

class circle : public shape 
{
    float r; // r=radius
    public:
        void area() 
		{
            cout << "\nEnter radius : ";
            cin >> r;
            cout << "\nArea of circle : " << (2.146 * r * r);
        }
};

class rectangle : public shape 
{
    int l, b; // l=length , b=bredth
    public:
        void area() {
            cout << "\nEnter length : ";
            cin >> l;
            cout << "\nEnter breadth : ";
            cin >> b;
            cout << "\nArea of rectangle : " << l * b;
        }
};

class triangle : public shape 
{
    int h, b;
    float a;
    public:
        void area() 
		{
            cout << "\nEnter height : ";
            cin >> h;
            cout << "\nEnter breadth : ";
            cin >> b;
            a = 0.5 * h * b;
            cout << "\nArea of triangle : " << a;
        }
};

int main() 
{
    circle c;
    c.area();
    rectangle r;
    r.area();
    triangle t;
    t.area();

    return 0;
}

