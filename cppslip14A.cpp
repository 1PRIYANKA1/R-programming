//Create a C++ class Sumdata to perform following functions: intsum(int, int) returns 
//the addition of two integer arguments. float sum(flaot, float, float) returns the 
//addition of three float arguments. int sum(int [ ], int) returns the sum of all 
//elements in an array of size 'n'. 

#include <iostream>
using namespace std;

int add(int a, int b) 
{
    return a + b;
}

float add(float a, float b, float c) 
{
    return a + b + c;
}

int add(int arr[], int n) 
{
    int sum = 0;
    for (int i = 0; i < n; i++) 
	{
        sum += arr[i];
    }
    return sum;
}

int main() 
{
    int a, b, n;
    float x, y, z;
    int arr[100];

    cout << "Enter two integers: ";
    cin >> a >> b;
    cout << "Sum of two integers: " << add(a, b) << endl;

    cout << "Enter three floats: ";
    cin >> x >> y >> z;
    cout << "Sum of three floats: " << add(x, y, z) << endl;

    cout << "Enter number of elements in array: ";
    cin >> n;
    cout << "Enter the array elements: ";
    
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }
    cout << "Sum of array elements: " << add(arr, n) << endl;

    return 0;
}

