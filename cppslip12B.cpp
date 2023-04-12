//B)	Create a C++ class Cuboid with data members length, breadth, and height. Write 
//necessary member functions for the following:
//i.	 void set values (float,float,float) to set values of data members.
//ii.	 void get values( ) to display values of data members.
//iii.	 float volume( ) to calculate and return the volume of cuboid.
//iv.	 float surface_ area( )to calculate an d return the surface area of cuboid.
//(Use Inline function)	

#include <iostream>
using namespace std;
class Cuboid 
{
public:
    float length, breadth, height;

    void get_values() 
	{
        cout << "Enter length, breadth, and height of the cuboid: ";
        cin >> length >> breadth >> height;
    }

    void volume() 
	{
        float vol = length * breadth * height;
        cout << "Cuboid volume: " << vol << endl;
    }

    void surface_area() 
	{
        float sa = 2 * (length * breadth + breadth * height + height * length);
        cout << "Cuboid surface area: " << sa << endl;
    }
};

int main() 
{
    Cuboid c;

    c.get_values();

    cout << "Cuboid dimensions: Length = " << c.length << ", Breadth = " << c.breadth << ", Height = " << c.height << endl;
    c.volume();
    c.surface_area();

    return 0;
}

