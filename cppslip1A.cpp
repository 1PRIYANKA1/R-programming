//Write a C++ program to check maximum and minimum of two integer numbers. (Use Inline function and Conditional operator)

#include <stdio.h>
#include<conio.h>
#include<iostream>
using namespace std;

class MaxMin
 {
    public:
        inline void findMaxMin(int a, int b, int &max, int &min) 
		{
            max = (a > b) ? a : b;
            min = (a < b) ? a : b;
        }
};

int main() 
{
    MaxMin mm;
    int num1, num2, max, min;
    
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;
    
    mm.findMaxMin(num1, num2, max, min);
    
    cout << "Maximum number is " << max << endl;
    cout << "Minimum number is " << min << endl;
    
    return 0;
}


//Explanation:
//
//-We define a class MaxMin that contains an inline function findMaxMin to find the 
//maximum and minimum of two integer numbers.
//-The findMaxMin function takes in two integer arguments a and b, and two integer 
//reference arguments max and min. The reference arguments are used to return the 
//maximum and minimum values respectively.
//-Inside the findMaxMin function, we use the conditional operator to find the maximum 
//and minimum of the two numbers.
//-In the main function, we create an object mm of the MaxMin class and call the 
//findMaxMin function on it with the user input values num1 and num2.
//-Finally, we print out the maximum and minimum values using the max and min variables.
