//Write a C++ program to accept length and width of a rectangle. Calculate and display 
//perimeter as well as area of a rectangle by using Inline function

#include<iostream>
using namespace std;

class rectangle
{
    float length, width;
    
    public:
    
    void getdata()
    {
        cout << "Enter length of rectangle : ";
        cin >> length;
        cout << "Enter width of rectangle : ";
        cin >> width;
    }
    
    inline void Perimeter()
    {
        cout << "Perimeter of rectangle = " << 2*(length+width) << endl;
    }
    
    inline void Area()
    {
        cout << "Area of rectangle = " << length*width << endl;
    }
};

int main()
{
    rectangle obj;
    obj.getdata();
    obj.Perimeter();
    obj.Area();
    return 0;
}

