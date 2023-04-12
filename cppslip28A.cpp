//Write C++ program to create two classes Integer_Array and Float_Array with an array 
//as a data member. Write necessary member functions to accept and display array 
//elements of both the classes. Find and display average of both the array. (Use Friend function) 

#include <iostream>
using namespace std;
class FloatArray;
class IntArray 
{
    int arr[10];
public:
    void get() 
	{
        cout << "Enter 10 integer elements:\n";
        for (int i = 0; i < 10; i++) 
		{
            cin >> arr[i];
        }
    }
    void display() 
	{
        cout << "Elements of integer array are:\n";
        for (int i = 0; i < 10; i++) 
		{
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    friend float calcAvg(IntArray obj1, FloatArray obj2);
};

class FloatArray 
{
    float arr[10];
public:
    void get() 
	{
        cout << "Enter 10 float elements:\n";
        for (int i = 0; i < 10; i++) 
		{
            cin >> arr[i];
        }
    }
    void display() 
	{
        cout << "Elements of float array are:\n";
        for (int i = 0; i < 10; i++) 
		{
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    friend float calcAvg(IntArray obj1, FloatArray obj2);
};

float calcAvg(IntArray obj1, FloatArray obj2) 
{
    float sum = 0;
    for (int i = 0; i < 10; i++) 
	{
        sum += obj1.arr[i] + obj2.arr[i];
    }
    return sum / 20;
}

int main() 
{
    IntArray a1;
    FloatArray a2;

    a1.get();
    a2.get();

    a1.display();
    a2.display();

    cout << "Average of both arrays: " << calcAvg(a1, a2) << endl;

    return 0;
}

