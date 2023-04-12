//Write a C++ program to read array of 'n' integers from user and display it in reverse 
//order.(Use Dynamic memory allocation)

#include <iostream>
using namespace std;
int main() 
{
    int n;
    cout << "Enter the number of integers: ";
    cin >> n;

    int arr[n];

    cout << "Enter " << n << " integers:" << endl;
    for (int i = 0; i < n; i++) 
	{
        cin >> arr[i];
    }

    cout << "The integers in reverse order are:" << endl;
    for (int i = n - 1; i >= 0; i--) 
	{
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}

