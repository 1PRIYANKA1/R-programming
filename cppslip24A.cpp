//Write a C++ program to find average of 3 integer numhers and average of 3 float numhers.
//(Use function overloading)

#include <iostream>
using namespace std;

float average(int a, int b, int c) 
{
    return (a + b + c) / 3.0;
}

float average(float a, float b, float c) 
{
    return (a + b + c) / 3.0;
}

int main() 
{
    int num1, num2, num3;
    float num4, num5, num6;

    cout << "Enter three integers: ";
    cin >> num1 >> num2 >> num3;
    cout << "Average of integers: " << average(num1, num2, num3) << endl;

    cout << "Enter three floating point numbers: ";
    cin >> num4 >> num5 >> num6;
    cout << "Average of float numbers: " << average(num4, num5, num6) << endl;

    return 0;
}

