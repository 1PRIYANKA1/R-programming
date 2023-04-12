//Write a C++ program to find volume of cylinder, cone and sphere. 
//(Use function overloading). 

#include<iostream>
using namespace std;

// Function to calculate volume of a cylinder
float vol(int r, int h) 
{
    return (3.14 * r * r * h);
}

// Function to calculate volume of a sphere
float vol(float r1) 
{
    return ((4 * 3.14 * r1 * r1 * r1) / 3);
}

// Function to calculate volume of a cube
int vol(int a) 
{
    return (a * a * a);
}
 
int main() 
{
    int r, h, a;
    float r1;
    
    // Take user input for radius and height of a cylinder, side of cube, and radius of sphere
    cout << "Enter radius and height of a cylinder:";
    cin >> r >> h;
    cout << "Enter side of cube:";
    cin >> a;
    cout << "Enter radius of sphere: ";
    cin >> r1;

    // Print the volume of cylinder, cube, and sphere using function overloading
    cout << "Volume of cylinder is " << vol(r, h);
    cout << "\nVolume of cube is " << vol(a);
    cout << "\nVolume of sphere is " << vol(r1);

    return 0;
}


