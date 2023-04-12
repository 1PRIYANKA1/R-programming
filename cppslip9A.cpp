//Create a C++ class MyArray, which contains single dimensional integer array of a give
//n size. Write a member function to display sum of given array elements. (Use Dynamic
//Constructor and Destructor)

#include <iostream>
using namespace std;

class MyArray 
{
private:
    int n;
    int* arr;
public:
    MyArray(int n) 
	{
        n = n;
        arr = new int[n];
    }

    ~MyArray() 
	{
        delete[] arr;
    }

    void input() 
	{
        cout << "Enter " << n << " elements:\n";
        for (int i = 0; i < n; i++) 
		{
            cin >> arr[i];
        }
    }

    void displaySum() 
	{
        int sum = 0;
        for (int i = 0; i < n; i++) 
		{
            sum += arr[i];
        }
        cout << "Sum of the elements: " << sum << endl;
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    MyArray arr(n);
    arr.input();
    arr.displaySum();
    return 0;
}

