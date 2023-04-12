//Write a C++ program to create a class which contains single dimensional integer array 
//of given size. Write a member function to display even and odd numbers from a given 
//array. (Use Dynamic Constructor to allocate and Destructor to free memory of an object)

#include <iostream>
#include <conio.h>

using namespace std;

class Array 
{
    int* arr;
    int size;
public:
    Array() 
	{
        cout << "Enter size of array: ";
        cin >> size;
        arr = new int[size];
        for (int i = 0; i < size; i++) 
		{
            cout << "Enter an element: ";
            cin >> arr[i];
        }
    }

    void displayEvenAndOdd() 
	{
        cout << "1 D matrix is: ";
        for (int i = 0; i < size; i++) 
		{
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "Even numbers are: ";
        for (int i = 0; i < size; i++) 
		{
            if (arr[i] % 2 == 0) 
			{
                cout << arr[i] << " ";
            }
        }
        cout << endl;

        cout << "Odd numbers are: ";
        for (int i = 0; i < size; i++) 
		{
            if (arr[i] % 2 != 0) 
			{
                cout << arr[i] << " ";
            }
        }
        cout << endl;
    }

    ~Array() 
	{
        delete[] arr;
        cout << "1 D array is destroyed.";
        getch();
    }
};

int main() 
{
    Array a;
    a.displayEvenAndOdd();

    return 0;
}

