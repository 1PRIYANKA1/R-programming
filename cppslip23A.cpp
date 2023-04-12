// Write a C++ program to calculate mean, mode and median of three integer numbers. (Use
//Inline function)

#include <iostream>
using namespace std;

// Function to calculate the mean of three numbers
inline float mean(int a, int b, int c) 
{
    return (a + b + c) / 3.0;
}

// Function to calculate the median of three numbers
inline float median(int a, int b, int c) 
{
    if ((a < b && b < c) || (c < b && b < a)) 
	{
        return b;
    } 
	else if ((b < a && a < c) || (c < a && a < b)) 
	{
        return a;
    } 
	else 
	{
        return c;
    }
}

// Function to calculate the mode of three numbers
inline int mode(int a, int b, int c) 
{
    if (a == b && b == c) 
	{
        return a;
    } 
	else if (a == b) 
	{
        return a;
    } 
	else if (a == c) 
	{
        return a;
    } 
	else 
	{
        return b;
    }
}

int main() 
{
    int num1, num2, num3;
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;

    cout << "Mean: " << mean(num1, num2, num3) << endl;
    cout << "Median: " << median(num1, num2, num3) << endl;
    cout << "Mode: " << mode(num1, num2, num3) << endl;

    return 0;
}

