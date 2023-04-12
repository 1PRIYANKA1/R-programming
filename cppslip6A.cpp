//Write a C++ program to create two Classes Square and Rectangle.Compare area of both
// the shapes using friend function. Accept appropriate data members for both the classes.

#include <iostream>
using namespace std;
class Rectangle;
class Square 
{
private:
    int side;
public:
    Square(int s = 0) 
	{
        side = s;
    }
    friend void compare(Square s, Rectangle r);
};

class Rectangle
{
private:
    int length;
    int width;
public:
    Rectangle(int l = 0, int w = 0) 
	{
        length = l;
        width = w;
    }
    friend void compare(Square s, Rectangle r);
};

void compare(Square s, Rectangle r) 
{
    int areaSquare = s.side * s.side;
    int areaRectangle = r.length * r.width;
    if (areaSquare > areaRectangle) 
	{
        cout << "Area of Square is greater than Area of Rectangle." << endl;
    } 
	else if (areaSquare < areaRectangle) 
	{
        cout << "Area of Rectangle is greater than Area of Square." << endl;
    } 
	else
	 {
        cout << "Area of Square is equal to Area of Rectangle." << endl;
    }
}

int main()
 {
    int s, l, w;
    cout << "Enter the side of the square: ";
    cin >> s;
    cout << "Enter the length of the rectangle: ";
    cin >> l;
    cout << "Enter the width of the rectangle: ";
    cin >> w;
    Square sq(s);
    Rectangle rec(l, w);
    compare(sq, rec);
    return 0;
}

